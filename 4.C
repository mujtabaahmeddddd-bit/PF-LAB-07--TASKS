#include <stdio.h>

int main() {
    char name[20];
    int i = 0, count = 0;

    printf("Enter display name (letters only): ");
    scanf("%[A-Za-z]", name);

    while (name[i] != '\0') {
        printf("Character at index %d: %c\n", i, name[i]);
        count++;
        i++;
    }
    printf("Total valid alphabetic characters stored: %d\n", count);

    if (name[0] >= 'a' && name[0] <= 'z') {
        name[0] = name[0] - 32;
    }

    printf("Final Display Name: %s\n", name);

    return 0;
}