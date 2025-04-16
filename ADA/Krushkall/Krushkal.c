#include <stdio.h>

#define INF 999

int parent[20];      // To store parent of each node
int n;               // Number of vertices

// Find the root of the set that node i belongs to
int find(int i) {
    while (parent[i]) {
        i = parent[i];
    }
    return i;
}

// Union of two sets (if not already connected)
int uni(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

// Kruskal’s algorithm to find MST
void kruskalMST(int n, int cost[20][20]) {
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

        u = find(a);
        v = find(b);

        if (uni(u, v)) {
            printf("%d edge (%d,%d) = %d\n", ne++, a, b, min);
            mincost += min;
        }

        cost[a][b] = cost[b][a] = INF;
    }

    printf("\nMinimum cost = %d\n", mincost);
}

int main() {
    int cost[20][20];
    int i, j;

    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;  // Representing no edge
        }
    }

    kruskalMST(n, cost);

    return 0;
}
