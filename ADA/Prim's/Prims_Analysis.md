# 🌲 Prim’s Algorithm – Time and Space Complexity Analysis

## 📘 Definition

**Prim’s Algorithm** is a **greedy algorithm** used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph.

A **Minimum Spanning Tree** connects all the vertices with the **minimum possible total edge cost** without forming cycles.

### Key Idea:
Start from an arbitrary vertex and grow the MST by adding the **cheapest edge** that connects a visited node to an unvisited node, until all nodes are included.

---

# 📈 Time Complexity Analysis of Prim’s Algorithm (Adjacency Matrix Implementation)

## 🔁 Code Structure Overview

- You maintain a `visited[]` array to keep track of included nodes.
- In each iteration, you:
  - Traverse all edges from visited to unvisited nodes.
  - Find the **minimum weight edge**.
  - Add the corresponding node to the MST.
- This process continues until `n - 1` edges are added.

---

### 📊 Time Complexity Derivation

Let `n` be the number of vertices.

1. **Outer Loop:**
   - Executes `n - 1` times to include `n - 1` edges in MST → O(n)

2. **Inner Loops (Edge Selection):**
   - For each iteration, scan all `n × n` edges in the matrix.
   - This results in `O(n²)` total operations over all iterations.

---

✅ **Final Time Complexity:**

- Best Case:    O(n²)  
- Average Case: O(n²)  
- Worst Case:   O(n²)

> Note: This is for **adjacency matrix** implementation.  
Using **priority queue + adjacency list**, time complexity can be improved to O(E log V).

---

# 🧠 Space Complexity Analysis

## 💾 Data Structures Used

- **Adjacency Matrix**: 2D array `cost[n+1][n+1]` → O(n²)
- **Visited Array**: Marks nodes included in MST → O(n)
- Scalar variables for bookkeeping → O(1)

---

### Space Breakdown

- Adjacency Matrix: **O(n²)**
- Visited Array: **O(n)**
- Total Auxiliary Space: **O(n²)**

---

✅ **Final Space Complexity:**

- Auxiliary Space: **O(n²)**  
- In-place: ❌ No (uses separate matrix and tracking array)

---

# 📌 Summary Table

| Component          | Complexity |
|--------------------|------------|
| Time Complexity     | O(n²)      |
| Space Complexity    | O(n²)      |

---

# 🧮 Equation Derivation of Time Complexity

Let `T(n)` be the total operations:

1. **Edge Selection Phase:**

   For each of the `n - 1` edges added to the MST:
   - Scan entire matrix to find the smallest edge → O(n²)

   So,

```bash
T(n) = (n - 1) × O(n²) ≈ O(n²)

```

