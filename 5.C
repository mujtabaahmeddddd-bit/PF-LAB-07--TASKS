#include <stdio.h>

int main() {
    char input[30];
    char cleaned[30];
    int i = 0, j = 0, digit_count = 0;

    printf("Enter phone number: ");
    scanf("%[^\n]", input);

    while (input[i] != '\0') {
        if (input[i] >= '0' && input[i] <= '9') {
            cleaned[j] = input[i];
            j++;
            digit_count++;
        }
        i++;
    }
    cleaned[j] = '\0';

    printf("Original Input  : %s\n", input);
    printf("Cleaned Number  : %s\n", cleaned);
    printf("Digit Count     : %d\n", digit_count);

    if (digit_count == 11) {
        printf("Valid local number\n");
    } else {
        printf("Invalid length - please re-enter\n");
    }

    return 0;
}