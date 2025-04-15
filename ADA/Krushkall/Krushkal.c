#include<stdio.h>

int i, j, k, a, b, u, v, n, ne = 1;
int min, mincost = 0, parent[9]; // No pointers, just regular arrays
int cost[9][9]; // Static array size, will be used as VLA

int find(int i) {
    while(parent[i]) {
        i = parent[i];
    }
    return i;
}

int uni(int i, int j) {
    if(i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}


int main() {
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    
    // VLA for cost matrix
    int cost[n+1][n+1]; // Dynamically sized based on user input
    
    // Input adjacency matrix
    printf("\nEnter the cost adjacency matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;  // No edge, represented by infinity
        }
    }

    printf("\nThe edges of Minimum Cost Spanning Tree are:\n\n");

    // Kruskal's algorithm logic to find MST
    while(ne < n) {
        min = 999;
        
        // Find the minimum cost edge
        for(i = 1; i <= n; i++) {
            for(j = i+1; j <= n; j++) {  // Avoid checking the same edge twice
                if(cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        
        u = find(a);
        v = find(b);

        // If including this edge doesn't form a cycle
        if(uni(u, v)) {
            printf("%d edge (%d,%d) = %d\n", ne++, a, b, min);
            mincost += min;
        }
        
        // Mark this edge as used by setting cost to a large number
        cost[a][b] = cost[b][a] = 999;
    }

    // Output the minimum cost of the spanning tree
    printf("\nMinimum cost = %d\n", mincost);
    
    return 0;
}

