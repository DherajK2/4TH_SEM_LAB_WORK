#include <stdio.h>

// Function to perform Prim's Algorithm
void prims(int n, int cost[n + 1][n + 1]) {
    int visited[n + 1];
    int i, j, ne = 1, a, b, u, v, min, mincost = 0;

    // Initialize visited array
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    visited[1] = 1; // Start from node 1

    printf("\nEdges in the Minimum Cost Spanning Tree:\n");

    while (ne < n) {
        min = 999;

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (visited[i] && !visited[j] && cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        if (!visited[v]) {
            printf("Edge %d: (%d -> %d) cost: %d\n", ne++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }

        cost[a][b] = cost[b][a] = 999; // Mark edge as used
    }

    printf("\nMinimum cost = %d\n", mincost);
}

int main() {
    int n, i, j;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Declare adjacency matrix dynamically
    int cost[n + 1][n + 1];

    printf("\nEnter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999; // Replace 0 with "infinity"
        }
    }

    // Call Prim's algorithm function
    prims(n, cost);

    return 0;
}
