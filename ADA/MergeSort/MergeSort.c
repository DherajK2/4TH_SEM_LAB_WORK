#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Merge two sorted subarrays into one
void Merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int b[high + 1];  // temporary array

    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (i <= mid)
        b[k++] = a[i++];

    while (j <= high)
        b[k++] = a[j++];

    for (int l = low; l <= high; l++)
        a[l] = b[l];  // copy back to original array
}

// Recursive merge sort
void mergeSort(int a[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    Merge(a, low, mid, high);
}

int main() {
    int n;
    clock_t start, end;
    double total_time;

    printf("\nEnter the number of inputs: ");
    scanf("%d", &n);
    int arr[n];

    // Generate random numbers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }

    // Sort using merge sort
    start = clock();
    mergeSort(arr, 0, n - 1);
    end = clock();

    total_time = (double)(end - start) / CLOCKS_PER_SEC;

    // Print sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTime Taken for sorting: %f seconds\n\n", total_time);

    return 0;
}
