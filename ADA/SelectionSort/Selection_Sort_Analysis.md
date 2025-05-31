# 📈 Time Complexity Analysis of Selection Sort

The Selection Sort algorithm works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning.

## 🔁 Code Structure (Nested Loops)

```bash
void selectionSort(int arr[], int size) {
    int min, temp;
    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (i != min) {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
```

## 📊 Time Complexity Derivation Using Summation

Let the size of the array be `n`.

- The outer loop runs from `i = 0` to `n - 2`, so it runs **(n - 1)** times.  
- For each iteration `i`, the inner loop runs from `j = i + 1` to `n - 1`, i.e., it runs **(n - i - 1)** times.

The total number of comparisons made by the inner loop across all iterations is:

∑(i = 0 to n - 2) (n - i - 1)

Simplifying the summation:

= ∑(i = 0 to n - 2) (n - 1 - i)  
= (n - 1) + (n - 2) + ... + 1

This is an arithmetic series:

= (n - 1) * n / 2

So, the **time complexity** of Selection Sort in terms of comparisons is:

**O(n²)**

## ⏱️ Additional Notes

- The swap operation is done at most `(n - 1)` times → O(n).  
- However, it is **dominated** by the number of comparisons → O(n²).

---

✅ **Final Time Complexity:**

- Best Case:    O(n²)  
- Average Case: O(n²)  
- Worst Case:   O(n²)

---

## 🧠 Space Complexity Analysis

Selection Sort is an **in-place** sorting algorithm, meaning it requires a constant amount of extra memory space.

- No additional arrays or data structures are used.
- Only a few variables are needed for indexing and swapping (e.g., `min`, `temp`, loop counters).

Therefore, the **space complexity** is:

**O(1)**

---

✅ **Final Space Complexity:**

- Auxiliary Space: O(1)  
- In-place: ✅ Yes
