# 🔁 Floyd’s Algorithm – Time and Space Complexity Analysis

## 📘 Definition

**Floyd’s Algorithm** (also called Floyd-Warshall Algorithm) is an all-pairs shortest path algorithm used on **weighted directed graphs**. It finds the shortest paths between every pair of vertices in a graph with `n` nodes.

The algorithm works by **iteratively improving** the shortest paths using a dynamic programming approach. It checks whether a path from `i` to `j` can be improved by going through an intermediate node `k`.

---

# 📈 Time Complexity Analysis of Floyd’s Algorithm

## 🔁 Code Structure (Triple Nested Loops)

- The algorithm uses **three nested loops**: one each for `k`, `i`, and `j`, all ranging from `1` to `n`.
- The body of the innermost loop does only **constant-time operations**.

```bash
 void floyds(int n, int p[n + 1][n + 1]) {
    int i, j, k;

    // Apply Floyd's algorithm
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == j) {
                    p[i][j] = 0;
                } else {
                    p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
                }
            }
        }
    }
}
```
---

### 📊 Time Complexity Derivation Using Multiplication

Let `n` be the number of vertices.

Each loop runs `n` times (from `1` to `n`), so the total number of iterations is:

***T(n) = n × n × n = n³***


This is because for every pair `(i, j)`, the algorithm checks if going through a third vertex `k` gives a shorter path.

---

✅ **Final Time Complexity:**

-  O(n³)  


> Note: Floyd’s Algorithm has **no faster best case**; it always processes every triplet (i, j, k).

---

# 🧠 Space Complexity Analysis

### 💾 Data Structures Used:

- A 2D matrix `p[n+1][n+1]` is used to store the shortest distances between every pair of nodes.

### Space Calculation:

- The matrix requires `(n + 1) × (n + 1)` integers → O(n²)
- A few scalar variables for loop counters and input values → O(1)

```bash
int p[n + 1][n + 1]
```


---

✅ **Final Space Complexity:**

- Auxiliary Space: **O(n²)**  
- In-place: ✅ Yes (updates matrix directly)

---

# 📌 Summary Table

| Component          | Complexity |
|--------------------|------------|
| Time Complexity     | O(n³)      |
| Space Complexity    | O(n²)      |

---

# 🧮 Equation Derivation of Time Complexity

Let `T(n)` be the number of operations:

```bash
T(n) = ∑ (k = 1 to n) ∑ (i = 1 to n) ∑ (j = 1 to n) O(1)
= n × n × n × O(1)
= O(n³)
```

---
