#include <stdio.h>

int main() {
    int queue[15];
    int count = 0;
    int token, i, choice;

    while (count < 15) {
        scanf("%d", &token);
        if (token == -1) {
            break;
        }
        queue[count] = token;
        count++;
    }

    for (i = 0; i < count; i++) {
        printf("Position %d -> Token %d\n", i + 1, queue[i]);
    }

    while (count > 0) {
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Calling Patient with Token: %d\n", queue[0]);
            for (i = 0; i < count - 1; i++) {
                queue[i] = queue[i + 1];
            }
            count--;
        } else if (choice == 2) {
            if (count >= 15) {
                continue;
            }
            scanf("%d", &token);
            for (i = count; i > 0; i--) {
                queue[i] = queue[i - 1];
            }
            queue[0] = token;
            count++;
        } else {
            break;
        }

        if (count == 0) {
            printf("Queue is now empty.\n");
        } else {
            for (i = 0; i < count; i++) {
                printf("Position %d -> Token %d\n", i + 1, queue[i]);
            }
        }
    }

    return 0;
}