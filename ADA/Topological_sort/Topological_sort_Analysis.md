# 🔁 Topological Sort using Kahn’s Algorithm – Time and Space Complexity Analysis

## 📘 Definition

**Topological Sorting** of a Directed Acyclic Graph (DAG) is a linear ordering of its vertices such that for every directed edge `u → v`, vertex `u` comes before `v` in the ordering.

**Kahn’s Algorithm** is a popular method to perform topological sorting by:

- Computing in-degrees (number of incoming edges) for all vertices.
- Repeatedly removing vertices with in-degree zero and updating in-degrees of adjacent vertices.
- Collecting nodes in a sequence that respects dependencies.

---

# 📈 Time Complexity Analysis of Kahn’s Algorithm

## 🔁 Code Structure Overview

- Calculating in-degree for each node by summing over columns of the adjacency matrix.
- Using a stack (or queue) to store nodes with in-degree zero.
- Iterating over adjacency matrix rows to decrement in-degree of adjacent nodes.
- Processing all nodes exactly once.

---

## 📊 Time Complexity Derivation

Let `n` be the number of vertices.

1. **Finding in-degree of each vertex**:

- For each vertex `j`, sum over all vertices `i` to count edges pointing to `j`.
- Complexity: O(n²) because of the nested loops over the adjacency matrix.

2. **Processing vertices for topological order**:

- Each vertex is pushed and popped once from the stack → O(n).
- For each vertex popped, we check all `n` possible outgoing edges → O(n) per vertex.
- Total in this phase is also O(n²) because we scan adjacency matrix rows.

---

**Total Time Complexity:**

- Dominated by scanning the adjacency matrix:  
**O(n²)**

---

✅ **Final Time Complexity:**

-  O(n²)  


---

# 🧠 Space Complexity Analysis

## 💾 Data Structures Used

- Adjacency matrix of size `n × n` → O(n²)
- In-degree array of size `n` → O(n)
- Stack array of size `n` → O(n)
- Result array of size `n` → O(n)

---

### Space Breakdown

- Adjacency Matrix: O(n²)
- Arrays for in-degree, stack, result: O(n)
- Scalar variables for indexing: O(1)

Since the adjacency matrix dominates:

---

✅ **Final Space Complexity:**

- Auxiliary Space: **O(n²)**  
- In-place: ❌ No (uses adjacency matrix and extra arrays)

---

# 📌 Summary Table

| Component          | Complexity |
|--------------------|------------|
| Time Complexity     | O(n²)      |
| Space Complexity    | O(n²)      |

---

# 🧮 Equation Derivation of Time Complexity

Let `T(n)` be the total operations:

1. Calculating in-degree:

```bash
T₁(n) = ∑(j=0 to n-1) ∑(i=0 to n-1) O(1) = n × n × O(1) = O(n²)

```

2. Processing vertices and updating in-degree:

```bash
T₂(n) = ∑(u=0 to n-1) ∑(v=0 to n-1) O(1) = n × n × O(1) = O(n²)

```
Total time:
```bash
T(n) = T₁(n) + T₂(n) = O(n²) + O(n²) = O(n²)

```

---
