#include <stdio.h>

int n;

void path(int n, int a[n][n], int p[n][n]) {
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
                if (p[i][k] == 1 && p[k][j] == 1) {
                    p[i][j] = 1;
                }
            }
        }
    }
}

int main() {
    int i, j;

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Declare variable-length arrays based on user input
    int a[n][n], p[n][n];

    // Input the adjacency matrix
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the path matrix using the transitive closure algorithm
    path(n, a, p);

    // Display the path matrix
    printf("\nThe Transitive Closure Matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
