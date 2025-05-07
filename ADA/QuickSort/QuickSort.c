#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // For clock() and CLOCKS_PER_SEC

// Swaps two integers
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

int main() {
    int n;
    clock_t start, end;
    double total_time;

    // Input number of elements
    printf("\nEnter the number of inputs: ");
    scanf("%d", &n);
    int arr[n];

    // Fill array with random numbers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }

    // Measure sorting time
    start = clock();
    quickSort(arr, 0, n - 1);
    end = clock();

    total_time = (double)(end - start) / CLOCKS_PER_SEC;

    // Print sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Print time taken
    printf("\nTime Taken for sorting: %f seconds\n", total_time);
    
    return 0;
}
