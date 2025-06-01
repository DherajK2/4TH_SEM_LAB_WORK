#include <stdio.h>

void knapsack(int value[], int weight[], int k, int n, int dp[n+1][k+1]) {
    // Fill dp array to calculate maximum profit
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0; // Base case: no items or zero capacity
            else {
                int take = 0;
                if (weight[i-1] <= j) {
                    // If we take the item, calculate the profit
                    take = value[i-1] + dp[i-1][j - weight[i-1]];
                }
                // Choose the maximum between taking or not taking the item
                dp[i][j] = (take > dp[i-1][j]) ? take : dp[i-1][j];
            }
        }
    }
}

void printSelectedItems(int value[], int weight[], int n, int k, int dp[n+1][k+1]) {
    printf("\n\nItems included are:\n");
    printf("Sl.no\tWeight\tProfit\n");
    int profit = 0;
    int count = 0;

    for (int i = n, j = k; i > 0; i--) {
        // Check if this item is included in the optimal solution
        if (dp[i][j] != dp[i-1][j]) {
            count++;
            printf("%d\t%d\t%d\n", count, weight[i-1], value[i-1]);
            profit += value[i-1]; // Add the value of the item to total profit
            j -= weight[i-1]; // Decrease capacity based on the selected item
        }
    }

    printf("Total profit = %d\n", profit); // Print the total profit
}

int main() {
    printf("Enter the number of objects: ");
    int n;
    scanf("%d", &n);

    int value[n];
    int weight[n];

    printf("Enter the values and weights of the objects:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &value[i], &weight[i]);
    }

    int k;
    printf("Enter the Limit of the sack: ");
    scanf("%d", &k);

    int dp[n+1][k+1];

    // Call knapsack function to fill dp table
    knapsack(value, weight, k, n, dp);

    // Print the selected items
    printSelectedItems(value, weight, n, k, dp);

    return 0;
}
