#include <stdio.h>
#define INFINITY 999

void dijkstra(int n, int v, int cost[n+1][n+1], int dist[n+1]) {
    int i, u, count, w, flag[n+1], min;

    for(i = 1; i <= n; i++) {
        flag[i] = 0;
        dist[i] = cost[v][i];
    }

    flag[v] = 1;
    count = 2;

    while(count <= n) {
        min = INFINITY;
        for(w = 1; w <= n; w++) {
            if(dist[w] < min && !flag[w]) {
                min = dist[w];
                u = w;
            }
        }

        flag[u] = 1;
        count++;

        for(w = 1; w <= n; w++) {
            if((dist[u] + cost[u][w] < dist[w]) && !flag[w]) {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}

int main() {
    int n, v;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int cost[n+1][n+1], dist[n+1];

    printf("Enter the cost matrix (0 for no path):\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0 && i != j)
                cost[i][j] = INFINITY;
        }
    }

    printf("Enter the source node (1 to %d): ", n);
    scanf("%d", &v);

    dijkstra(n, v, cost, dist);

    printf("Shortest paths from node %d:\n", v);
    for(int i = 1; i <= n; i++) {
        if(i != v)
            printf("%d -> %d, cost = %d\n", v, i, dist[i]);
    }

    return 0;
}
