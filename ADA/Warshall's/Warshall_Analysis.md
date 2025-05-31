# 🔁 Warshall’s Algorithm – Time and Space Complexity Analysis

## 📘 Definition

**Warshall’s Algorithm** is used to compute the **transitive closure** of a directed graph.  
Given a graph's **adjacency matrix**, the algorithm determines whether a **path exists** between every pair of nodes `(i, j)`.

- Input: An `n × n` adjacency matrix of a directed graph.
- Output: A **transitive closure matrix**, where each entry `p[i][j]` is 1 if a path exists from `i` to `j`, otherwise 0.

---

# 📈 Time Complexity Analysis of Warshall’s Algorithm

## 🔁 Code Structure (Triple Nested Loops)

- The algorithm contains **three nested loops** over `k`, `i`, and `j`, each running from `0` to `n - 1`.
- Inside the innermost loop, it performs **constant-time operations** (logical checks and assignments).

---

## 📊 Time Complexity Derivation Using Multiplication

Let `n` be the number of vertices.

Each of the three loops runs `n` times, so the total operations are:

---
***T(n) = n × n × n = O(n³)***


---

✅ **Final Time Complexity:**

- O(n³)  


> The algorithm always processes every triplet `(i, j, k)` regardless of input, so the time complexity does not vary by case.

---

# 🧠 Space Complexity Analysis

## 💾 Data Structures Used

- Two `n × n` matrices: one for the **adjacency matrix `a`** and one for the **path matrix `p`**.

---

### Space Breakdown

- Adjacency Matrix: O(n²)
- Path Matrix: O(n²)
- Scalar variables: O(1)

> Since matrices dominate the space usage, the final space complexity is:

---

✅ **Final Space Complexity:**

- Auxiliary Space: **O(n²)**  
- In-place: ❌ No (uses a separate path matrix)

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
T(n) = ∑ (k = 0 to n-1) ∑ (i = 0 to n-1) ∑ (j = 0 to n-1) O(1)
= n × n × n × O(1)
= O(n³)

```
