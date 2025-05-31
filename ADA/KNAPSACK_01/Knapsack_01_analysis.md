# 🎒 0/1 Knapsack Problem – Time and Space Complexity Analysis

## 📘 Definition

The **0/1 Knapsack Problem** is a classic dynamic programming problem where we are given:

- `n` items, each with a value and a weight.
- A knapsack with a **maximum weight capacity `k`**.

The goal is to **select a subset of items** such that:

- The total weight does not exceed `k`.
- The total value is **maximized**.
- Each item can be **included at most once** (hence "0/1").

---

# 📈 Time Complexity Analysis of 0/1 Knapsack (Bottom-Up DP)

The algorithm builds a DP table to store the maximum value attainable with the first `i` items and capacity `j`.

---

## 🔁 Code Structure (Nested Loops)

- The outer loop runs from `i = 0` to `n`, executing (n + 1) times.
- The inner loop runs from `j = 0` to `k`, executing (k + 1) times.
- Each iteration performs constant-time operations (comparison, addition, assignment).
```bash
/// your code
for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= k; j++) {
        // constant-time operations
    }
}
```
---

## 📊 Time Complexity Derivation Using Multiplication

The total number of entries in the DP table that are computed is:

**(n + 1) × (k + 1) = O(n × k)**

There is also a backtracking step to retrieve the selected items, which runs in **O(n)** time.

> Since O(n) is much smaller than O(n × k), it does not affect the overall time complexity.

---

✅ **Final Time Complexity:**

- O(n × k)  


---

# 🧠 Space Complexity Analysis

The space usage is mainly due to the DP table and input arrays.

```bash
int dp[n+1][k+1];
```

- This is a 2D array of size (n + 1) × (k + 1).
```bash
int value[n], weight[n];  // Input arrays of size n
```
---

## 💾 Space Breakdown

- A 2D DP table of size `(n + 1) × (k + 1)` → **O(n × k)**
- Two input arrays: `value[n]` and `weight[n]` → **O(n)**
- Scalar variables for loop counters and bookkeeping → **O(1)**

---

✅ **Final Space Complexity:**

- Auxiliary Space: **O(n × k)**  
- In-place: ❌ No (the algorithm uses a DP table)

---

