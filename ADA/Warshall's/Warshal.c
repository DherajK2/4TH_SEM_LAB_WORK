#include <stdio.h>

int n, a[10][10], p[10][10];

void path() {
    int i, j, k;

    // Initialize the path matrix to be the same as the adjacency matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            p[i][j] = a[i][j];
        }
    }

    // Apply the transitive closure to find paths
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                // If there's a path from i to k and from k to j, then there's a path from i to j
                if (p[i][k] == 1 && p[k][j] == 1) {
                    p[i][j] = 1;
                }
            }
        }
    }
}

void main() {
    int i, j;

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input the adjacency matrix
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the path matrix using the transitive closure algorithm
    path();

    // Display the path matrix
    printf("\nThe path matrix is shown below:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}
