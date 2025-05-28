#include<stdio.h>

int a[10][10], n, indegre[10];

// Function to find the in-degrees of each node
void find_indegre() {
    int i, j, sum;
    for(j = 0; j < n; j++) {
        sum = 0;
        for(i = 0; i < n; i++) {
            sum += a[i][j];  // Sum the edges pointing to vertex 'j'
        }
        indegre[j] = sum;  // Assign the in-degree of node 'j'
    }
}

// Function to perform Topological Sort using Kahn's Algorithm
void topology() {
    int i, u, v, t[10], s[10], top = -1, k = 0;
    
    // Initialize the in-degree array
    find_indegre();
    
    // Push nodes with in-degree 0 onto the stack
    for(i = 0; i < n; i++) {
        if(indegre[i] == 0) {
            s[++top] = i;
        }
    }
    
    // Process nodes in topological order
    while(top != -1) {
        u = s[top--];  // Pop a node from the stack
        t[k++] = u;    // Store the node in the result
        
        // Reduce the in-degree of adjacent nodes
        for(v = 0; v < n; v++) {
            if(a[u][v] == 1) {  // If there is an edge from u to v
                indegre[v]--;
                
                // If in-degree of 'v' becomes 0, push 'v' onto the stack
                if(indegre[v] == 0) {
                    s[++top] = v;
                }
            }
        }
    }
    
    // Print the topological order
    printf("The topological sequence is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int main() {
    int i, j;
    
    // Input the number of nodes (jobs)
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    
    // Input the adjacency matrix representing the directed graph
    printf("\nEnter the adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Perform the topological sort
    topology();
    
    return 0;
}
