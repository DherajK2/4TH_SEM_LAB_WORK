#include <stdio.h>

// Function to solve the knapsack problem using dynamic programming
void knapsack(int value[], int weight[], int n, int k, int dp[n+1][k+1]) {
    // Fill the dp table using the ternary operator
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;  // Base case: no items or zero capacity
            } else if (weight[i-1] <= j) {
                // Use ternary operator to decide whether to include the current item or not
                dp[i][j] = (value[i-1] + dp[i-1][j-weight[i-1]] > dp[i-1][j]) 
                            ? value[i-1] + dp[i-1][j-weight[i-1]] 
                            : dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];  // Exclude the current item if weight is too large
            }
        }
    }
}

// Function to print the selected items and the total profit
void printSelectedItems(int value[], int weight[], int n, int k, int dp[n+1][k+1]) {
    printf("Items included are:\n");
    printf("Sl.no\tWeight\tProfit\n");
    int profit = 0;
    int itemCount = 0;

    // Traverse the DP table to find the items selected in the optimal solution
    for (int i = n, j = k; i > 0; i--) {
        if (dp[i][j] != dp[i-1][j]) {  // Check if the current item is selected
            itemCount++;
            printf("%d\t%d\t%d\n", itemCount, weight[i-1], value[i-1]);
            profit += value[i-1];  // Add the item's value to total profit
            j -= weight[i-1];  // Reduce the remaining capacity by the weight of the selected item
        }
    }

    printf("Total profit = %d\n", profit);  // Print the total profit
}

int main() {
    int n, k;

    // Prompt the user for the number of items and knapsack capacity
    printf("Enter the number of items: ");
    scanf("%d", &n);  // User inputs the number of items

    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &k);  // User inputs the knapsack capacity

    int value[n], weight[n];
    
    // Input the values and weights of the items
    printf("Enter the values and weights of the items:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d - Value and Weight: ", i + 1);
        scanf("%d %d", &value[i], &weight[i]);  // User inputs both value and weight for each item
    }

    int dp[n+1][k+1];  // DP table for storing max profits

    // Solve the knapsack problem
    knapsack(value, weight, n, k, dp);

    // Print the selected items and total profit
    printSelectedItems(value, weight, n, k, dp);

    return 0;
}
