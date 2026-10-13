#include <stdio.h>

int main() {
    float marks[10];
    float sum = 0, average;
    int i, above_average = 0;

    for (i = 0; i < 10; i++) {
        do {
            printf("Enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);
        } while (marks[i] < 0 || marks[i] > 20);
    }

    for (i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);
        if (marks[i] >= 18) printf("Excellent\n");
        else if (marks[i] >= 14) printf("Good\n");
        else if (marks[i] >= 10) printf("Average\n");
        else printf("Needs Improvement\n");
        
        sum += marks[i];
    }

    average = sum / 10;
    printf("Class Average: %.2f\n", average);

    for (i = 0; i < 10; i++) {
        if (marks[i] > average) {
            above_average++;
        }
    }
    printf("Students Above Average: %d\n", above_average);

    for (i = 0; i < 10; i++) {
        marks[i] += 1.5;
        if (marks[i] > 20.0) {
            marks[i] = 20.0;
        }
    }

    sum = 0;
    for (i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);
        if (marks[i] >= 18) printf("Excellent\n");
        else if (marks[i] >= 14) printf("Good\n");
        else if (marks[i] >= 10) printf("Average\n");
        else printf("Needs Improvement\n");
        
        sum += marks[i];
    }
    printf("Revised Class Average: %.2f\n", sum / 10);

    return 0;
}