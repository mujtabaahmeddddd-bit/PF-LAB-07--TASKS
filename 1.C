#include <stdio.h>

int main() {
    int temperature[] = {31, 33, 35, 34, 38, 36, 32};
    int n = sizeof(temperature) / sizeof(temperature[0]);
    int i, sum = 0;
    int highest, lowest;
    float average;

    for (i = 0; i < n; i++) {
        printf("Day %d: %d C\n", i + 1, temperature[i]);
    }

    highest = temperature[0];
    lowest = temperature[0];
    for (i = 0; i < n; i++) {
        if (temperature[i] > highest) highest = temperature[i];
        if (temperature[i] < lowest) lowest = temperature[i];
        sum += temperature[i];
    }
    average = (float)sum / n;

    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    temperature[2] = 37;

    for (i = 0; i < n; i++) {
        printf("Day %d: %d C\n", i + 1, temperature[i]);
    }

    highest = temperature[0];
    lowest = temperature[0];
    sum = 0;
    for (i = 0; i < n; i++) {
        if (temperature[i] > highest) highest = temperature[i];
        if (temperature[i] < lowest) lowest = temperature[i];
        sum += temperature[i];
    }
    average = (float)sum / n;

    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    for (i = 0; i < n; i++) {
        printf("Address of Day %d: %p\n", i + 1, (void*)&temperature[i]);
    }

    return 0;
}