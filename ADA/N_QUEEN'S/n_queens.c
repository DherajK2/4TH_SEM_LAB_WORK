#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int count = 0;

// Function to check if the queen can be placed
int place(int a[], int pos) {
    int i;
    for (i = 1; i < pos; i++) {
        if ((a[i] == a[pos]) || (abs(a[i] - a[pos]) == abs(i - pos)))
            return 0;
    }
    return 1;
}

// Function to print one solution
void print_sol(int a[], int n) {
    int i, j;
    count++;
    printf("\n\nSolution #%d:\n", count);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i] == j)
                printf("Q\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
}

// Function to solve N-Queens using backtracking
void queen(int n) {
    int a[n + 1];  // VLA declaration
    int k = 1;
    a[k] = 0;

    while (k != 0) {
        a[k]++;
        while ((a[k] <= n) && !place(a, k))
            a[k]++;

        if (a[k] <= n) {
            if (k == n)
                print_sol(a, n);
            else {
                k++;
                a[k] = 0;
            }
        } else {
            k--;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of Queens: ");
    scanf("%d", &n);
    queen(n);
    printf("\nTotal solutions = %d\n", count);
    return 0;
}
