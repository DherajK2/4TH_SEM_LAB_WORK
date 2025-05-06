#include <stdio.h>

#define INF 999

int find(int parent[], int i) {
    while (parent[i]) {
        i = parent[i];
    }
    return i;
}

int uni(int parent[], int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

void kruskalMST(int n, int cost[n+1][n+1]) {
    int parent[n+1];  // VLA for parent array
    for (int i = 0; i <= n; i++)
        parent[i] = 0;

    int ne = 1, mincost = 0;
    int a, b, u, v, min, i, j;

    printf("\nThe edges of Minimum Cost Spanning Tree are:\n\n");

    while (ne < n) {
        min = INF;

        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        u = find(parent, a);
        v = find(parent, b);

        if (uni(parent, u, v)) {
            printf("%d edge (%d,%d) = %d\n", ne++, a, b, min);
            mincost += min;
        }

        cost[a][b] = cost[b][a] = INF;
    }

    printf("\nMinimum cost = %d\n", mincost);
}

int main() {
    int n;

    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    int cost[n+1][n+1];  // VLA for cost matrix

    printf("\nEnter the cost adjacency matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    kruskalMST(n, cost);

    return 0;
}
