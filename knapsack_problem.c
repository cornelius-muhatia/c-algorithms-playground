#include <stdio.h>

int get_max_weight(int weight[], int profit[], int knapsack_capacity);

int main() {
    printf("===================== Knapsack 0/1 Problem =====================\n");

    int weight[4] = {2, 3, 4, 5};
    int profit[4] = {1, 2, 5, 6};

    int total_profit = get_max_weight(weight, profit, 8);

    printf("Maximum profit is %d\n", total_profit);

    return 0;
}

int get_max_weight(int weight[], int profit[], int knapsack_capacity) {
    int no_items = sizeof(weight)/sizeof(weight[0]);

    int matrix[no_items + 2][knapsack_capacity + 1];

    return 0;
}


