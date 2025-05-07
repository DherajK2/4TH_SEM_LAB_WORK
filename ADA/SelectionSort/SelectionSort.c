#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Selection Sort in ascending order
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

    // Sort using selection sort
    start = clock();
    selectionSort(arr, n);
    end = clock();

    total_time = (double)(end - start) / CLOCKS_PER_SEC;

    // Print sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nTime Taken for sorting: %f seconds\n\n", total_time);
    
    return 0;
}
