#include <stdio.h>
#define MAX 10       // Max allowed nodes
#define INFINITY 999

void dijkstra(int n, int v, int cost[MAX][MAX], int dist[MAX]) {
    int i, u, count, w, flag[MAX], min;

    for(i = 0; i < n; i++) {
        flag[i] = 0;
        dist[i] = cost[v][i];
    }

    flag[v] = 1;
    count = 1;

    while(count < n) {
        min = INFINITY;
        for(w = 0; w < n; w++) {
            if(dist[w] < min && !flag[w]) {
                min = dist[w];
                u = w;
            }
        }

        flag[u] = 1;
        count++;

        for(w = 0; w < n; w++) {
            if((dist[u] + cost[u][w] < dist[w]) && !flag[w]) {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}

int main() {
    int n, v, i, j;
    int cost[MAX][MAX], dist[MAX];

    printf("Enter the number of nodes (max %d): ", MAX);
    scanf("%d", &n);

    if(n > MAX) {
        printf("Too many nodes! Max allowed is %d.\n", MAX);
        return 1;
    }

    printf("Enter the cost matrix (0 for no path):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0 && i != j)
                cost[i][j] = INFINITY;
        }
    }

    printf("Enter the source node (0 to %d): ", n - 1);
    scanf("%d", &v);

    dijkstra(n, v, cost, dist);

    printf("Shortest paths from node %d:\n", v);
    for(i = 0; i < n; i++) {
        if(i != v)
            printf("%d -> %d, cost = %d\n", v, i, dist[i]);
    }

    return 0;
}
