# 🎓 ADA Viva Questions and Answers (2024-25)
**Department of Computer Science & Engineering**  
**The National Institute of Engineering, Mysuru**  

---

## 🔍 Introduction to ADA

### What is ADA (Analysis and Design of Algorithms)?
ADA is the study of algorithm efficiency in terms of time and space, helping in the design of optimal solutions for computational problems.

### Why do we study ADA?
- To improve problem-solving skills.
- To choose the best algorithm for a task.
- To analyze trade-offs between time and space.
- For real-world system optimization.

### What are the characteristics of a good algorithm?
- Correctness
- Efficiency (time and space)
- Finiteness
- Simplicity
- Generality

### Common Asymptotic Notations
- **Big-O (O)**: Upper bound (Worst-case)
- **Big-Ω (Omega)**: Lower bound (Best-case)
- **Big-Θ (Theta)**: Tight bound (Average-case)

---

## ✅ Experiment-wise Viva Questions and Answers

### 1. Selection Sort
- **Working**: Repeatedly selects the minimum element and places it at the beginning.
- **Time Complexity**:
  - Best: O(n²)
  - Average: O(n²)
  - Worst: O(n²)
- **Space Complexity**: O(1)
- **Stable?**: No
- **Use Case**: Suitable for small datasets and educational purposes.

### 2. Topological Sort
- **Definition**: Linear ordering of vertices such that for every edge u → v, u comes before v.
- **Applicable to**: Directed Acyclic Graphs (DAGs)
- **Time Complexity**: O(V + E)
- **Applications**:
  - Task scheduling
  - Build systems (e.g., Makefile dependencies)

### 3. Merge Sort
- **Approach**: Divide and Conquer
- **Time Complexity**:
  - Best: O(n log n)
  - Average: O(n log n)
  - Worst: O(n log n)
- **Space Complexity**: O(n)
- **Stable?**: Yes
- **Use Case**: Sorting linked lists, external sorting (large datasets)

### 4. Quick Sort
- **Approach**: Divide and Conquer with pivot
- **Time Complexity**:
  - Best: O(n log n)
  - Average: O(n log n)
  - Worst: O(n²) (bad pivot)
- **Space Complexity**: O(log n)
- **Stable?**: No
- **Use Case**: In-place sorting, performance-critical systems

### 📊 Sorting Comparison
**Which sort is best among selection, merge, and quick sort? Why?**

- **Best for small data**: Selection Sort (simplicity)
- **Best for stable sorting**: Merge Sort (guaranteed O(n log n), stable)
- **Best in practice**: Quick Sort (faster, better cache performance)

> **Verdict**: Quick Sort is generally the fastest for large in-memory arrays, but Merge Sort is better for stability and linked lists.

### 5. 0/1 Knapsack using DP
- **Problem**: Maximize value with given weight constraints.
- **Approach**: DP with memoization
- **Time Complexity**: O(n * W) (W = max weight)
- **Applications**:
  - Budget allocation
  - Cargo loading

### 6a. Floyd’s Algorithm (All-Pairs Shortest Path)
- **Working**: Dynamic programming
- **Time Complexity**: O(n³)
- **Handles Negative Weights**: Yes
- **Application**: Routing algorithms, network analysis

### 6b. Warshall’s Algorithm (Transitive Closure)
- **Purpose**: Determine reachability between nodes
- **Time Complexity**: O(n³)
- **Application**: Database systems, compiler design (dependency resolution)

### 7. Prim’s Algorithm (MST)
- **Approach**: Greedy
- **Time Complexity**: O(E log V) with min-heap
- **Application**: Network design, electrical grids

### 8. Kruskal’s Algorithm (MST)
- **Approach**: Greedy + Disjoint Sets
- **Time Complexity**: O(E log E)
- **Application**: Network clustering, image segmentation

### 9. Dijkstra’s Algorithm
- **Purpose**: Single-source shortest path
- **Approach**: Greedy with priority queue
- **Time Complexity**: O((V + E) log V)
- **Limitation**: No negative weights
- **Applications**: GPS, Google Maps, routing

### 10. Backtracking
- **Concept**: Explore all possibilities and backtrack upon failure
- **Example Problems**: N-Queens, Sudoku, Subset Sum
- **Time Complexity**: Varies, exponential in worst-case
- **Applications**: Puzzle solving, decision trees

---

## 📘 Algorithm Paradigms: Explanation & Comparison

### What is Brute Force?
- Try all possibilities.
- **Pros**: Simple
- **Cons**: Inefficient
- **Example**: Linear search, factorial computation

### What is Divide and Conquer?
- Divide → Solve recursively → Combine
- **Example**: Merge Sort, Quick Sort

### What is Greedy?
- Make the locally optimal choice at each step.
- **Example**: Prim’s, Kruskal’s, Dijkstra’s

### What is Dynamic Programming?
- Use memoization for overlapping subproblems.
- **Example**: 0/1 Knapsack, Floyd’s algorithm

---

## 🧠 Paradigm Comparison

| Paradigm | Strategy | Efficiency | Example Problems | Pros | Cons |
|----------|----------|------------|------------------|------|------|
| Brute Force | Try all possibilities | Very Low | Linear Search | Simple | Very inefficient |
| Divide & Conquer | Divide, solve, combine | High | Merge Sort, Quick Sort | Clean recursive structure | Overhead due to recursion |
| Greedy | Best local choice | High | Prim’s, Kruskal’s | Simple and fast | May not find optimal solution |
| DP | Optimal substructure + overlapping subproblems | High | 0/1 Knapsack, Floyd’s | Efficient reuse | Complex to implement |

---

## 🔄 Analytical Questions
- Which paradigm suits your problem and why?
- How do you decide between greedy and DP?
- What is the impact of stability in sorting algorithms?
- Why does Dijkstra's fail with negative edges?


## 🔄 Analytical Questions

### 1. Which paradigm suits your problem and why?
- The choice depends on the **problem characteristics**:
  - Use **Brute Force** when the input size is small and no better algorithm exists.
  - Use **Divide and Conquer** when the problem can be divided into **independent subproblems** (e.g., sorting).
  - Use **Greedy** when making the **locally optimal choice** leads to a **globally optimal solution**.
  - Use **Dynamic Programming** when the problem has **overlapping subproblems** and **optimal substructure**.

---

### 2. How do you decide between Greedy and DP?
- First, check if **Greedy gives an optimal solution** for your problem.
  - If **Greedy fails** (i.e., misses better global outcomes), use **DP**.
- **Greedy** is faster and easier to implement.
- **DP** is more powerful and accurate but uses more memory and computation.

**Example**:
- **Greedy works** for: Dijkstra’s, Kruskal’s.
- **DP needed** for: 0/1 Knapsack, Floyd’s algorithm.

---

### 3. What is the impact of stability in sorting algorithms?
- A **stable sort** preserves the relative order of equal elements.
- It's important when:
  - Sorting records based on **multiple keys** (e.g., sort by department, then by name).
  - You want to **maintain previous sorting results**.

**Example**:
- Sorting students by grade (primary), and within the same grade, by name (secondary).

- **Merge Sort** is stable.
- **Quick Sort** and **Selection Sort** are not.

---

### 4. Why does Dijkstra’s fail with negative edges?
- Dijkstra assumes that once a node is visited with the shortest distance, it won’t be improved.
- **With negative edges**, this assumption breaks — a better path might come later.
- Dijkstra may report **incorrect shortest paths** in graphs with **negative weights**.

**Solution**:
- Use **Bellman-Ford Algorithm** for graphs with negative edge weights.

---


---

## 🌐 Real-Life Applications in Computer Science (Well-Known Examples)

| **Algorithm/Paradigm** | **Real-World CS Application**                                     |
|------------------------|--------------------------------------------------------------------|
| **Selection Sort**     | Sorting small arrays in embedded systems                          |
| **Merge Sort**         | External sorting in databases and Unix `sort`                     |
| **Quick Sort**         | Default sort in C++ STL, Java, Python                             |
| **Topological Sort**   | Build tools (Makefile), dependency resolution in compilers        |
| **Floyd’s Algorithm**  | All-pairs shortest path in dynamic routing protocols (OSPF)       |
| **Warshall’s Algorithm**| Reachability analysis in control flow and query systems          |
| **Prim’s Algorithm**   | Network cabling for LAN/WAN design                                |
| **Kruskal’s Algorithm**| Image segmentation, MST for network optimization                  |
| **Dijkstra’s Algorithm**| Shortest path in Google Maps, AI pathfinding in games            |
| **0/1 Knapsack**       | Cloud computing resource allocation, budget-based project planning|
| **Backtracking**       | Puzzle solving, compilers, decision making in AI                  |

---

**End of Viva Prep Notes**
