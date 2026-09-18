#include <stdio.h>

float average(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + grades[i];
    }
    return (float)sum / n;
}

int highest(int grades[], int n) {
    int high = 0;
    for (int i = 1; i < n; i++) {
        if (grades[i] > grades[high]) {
            high = i;
        }
    }
    return high;
}
int lowest(int grades[], int n) {
    int low = 0;
    for (int i = 1; i < n; i++) {
        if (grades[i] < grades[low]) {
            low = i;
        }
    }
    return low;
}
int main() {
    int n;
    char names[100][50];
    int grades[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }

    int high = highest(grades, n);
    int low = lowest(grades, n);

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", average(grades, n));
    printf("Highest grade: %d (%s)\n",
           grades[high], names[high]);

    printf("Lowest grade: %d (%s)\n",
           grades[low], names[low]);

    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (grades[i] > 60) {
            if (grades[i] >= 80) {
                printf("%s - Grade A\n", names[i]);
            }
            else if (grades[i] >= 70) {
                printf("%s - Grade B\n", names[i]);
            }
            else {
                printf("%s - Grade C\n", names[i]);
            }
        }
    }

    return 0;
}