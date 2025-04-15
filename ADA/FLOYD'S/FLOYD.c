#include <stdio.h>

int min(int a, int b);

void floyds(int n, int p[n + 1][n + 1]) {
    int i, j, k;

    // Apply Floyd's algorithm
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == j) {
                    p[i][j] = 0;
                } else {
                    p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
                }
            }
        }
    }
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int w, n, e = 0, u, v, i, j;

    // Input number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // VLA declared based on user input
    int p[n + 1][n + 1];

    // Input the cost adjacency matrix and calculate the number of edges
    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &p[i][j]);

            if (i != j && p[i][j] != 999) {
                e++;
            }
        }
    }

    // Display the number of edges
    printf("\nNumber of edges: %d\n", e);

    // Display the initial matrix of input data
    printf("\nMatrix of input data:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }

    // Perform Floyd's algorithm
    floyds(n, p);

    // Display the transitive closure matrix
    printf("\nTransitive closure:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }

    // Display the shortest paths
    printf("\nThe shortest paths are:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i != j) {
                printf("\n<%d,%d> = %d", i, j, p[i][j]);
            }
        }
    }

    return 0;
}
