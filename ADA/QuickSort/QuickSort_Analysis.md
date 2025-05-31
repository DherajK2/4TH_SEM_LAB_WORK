# ⚡ Time and Space Complexity Analysis of Quick Sort

Quick Sort is a **divide-and-conquer** algorithm that works by selecting a pivot element and partitioning the array around the pivot such that elements less than the pivot go to the left, and elements greater go to the right. This process is applied recursively to the subarrays.

## 🔁 Code Structure

```bash
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Partitions the array for quicksort
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

// Recursive quicksort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
```

## 📊 Time Complexity Derivation Using Summation

Let the size of the array be `n`.

Quick Sort works by recursively dividing the array into two parts and sorting them. The time complexity depends on how the partition divides the array.

### ✅ Best Case (Balanced Partition)

If the pivot divides the array into two equal halves each time:

- Depth of recursion tree: `log₂n`
- Work done at each level: `n` (partitioning takes linear time)

So, total time:

T(n) = n + n/2 + n/4 + ... + 1  
     = O(n log n)

This is a geometric series that sums to:

**T(n) = O(n log n)**

### ⚠️ Worst Case (Unbalanced Partition)

Occurs when the pivot is the smallest or largest element every time (e.g., sorted array):

- One part has `n - 1` elements, the other has `0`.
- Depth of recursion tree: `n`
- Work done at each level: `n`

So, total time:

T(n) = n + (n - 1) + (n - 2) + ... + 1  
     = n(n - 1)/2  
     = **O(n²)**

### 🎯 Average Case

On average, the pivot divides the array fairly evenly. So,

- Recursion depth: O(log n)
- Work per level: O(n)

Hence, the total expected time:

**T(n) = O(n log n)**

---

✅ **Final Time Complexity:**

- Best Case:    O(n log n)  
- Average Case: O(n log n)  
- Worst Case:   O(n²)

---

## 🧠 Space Complexity Analysis

Quick Sort is typically implemented recursively. The space complexity depends on the recursion depth.

### 📌 Worst Case (Unbalanced Recursion)

- Maximum depth = `n` → O(n) stack space

### ✅ Best/Average Case (Balanced Recursion)

- Recursion depth = O(log n)

So,

- No extra data structures used (in-place)
- Only function call stack takes space

**Auxiliary Space Complexity: O(log n) (average), O(n) (worst case)**  
**In-place:** ✅ Yes

---

✅ **Final Space Complexity:**

- Best Case:    O(log n)  
- Average Case: O(log n)  
- Worst Case:   O(n)
