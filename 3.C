#include <stdio.h>

int main() {
    int stock[] = {25, 12, 8, 40, 5, 18, 3, 22};
    int n = sizeof(stock) / sizeof(stock[0]);
    int i, item_num, sold_qty;

    for (i = 0; i < n; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);
        if (stock[i] < 10) {
            printf("Item %d is LOW on stock - reorder required\n", i + 1);
        }
    }

    while (1) {
        printf("Enter item number (1-%d, or 0 to stop): ", n);
        scanf("%d", &item_num);

        if (item_num == 0) {
            break;
        }

        if (item_num < 1 || item_num > n) {
            continue;
        }

        printf("Enter quantity sold for Item %d: ", item_num);
        scanf("%d", &sold_qty);

        if (stock[item_num - 1] - sold_qty < 0) {
        } else {
            stock[item_num - 1] -= sold_qty;
        }
    }

    int total_units = 0;
    int min_stock = stock[0];
    int min_index = 0;

    for (i = 0; i < n; i++) {
        printf("Item %d Final Stock: %d units\n", i + 1, stock[i]);
        total_units += stock[i];
        if (stock[i] < min_stock) {
            min_stock = stock[i];
            min_index = i;
        }
    }

    printf("Total Units Remaining: %d\n", total_units);
    printf("Item with Least Stock: Item %d (%d units)\n", min_index + 1, min_stock);

    return 0;
}