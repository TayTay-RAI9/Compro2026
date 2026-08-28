#include <stdio.h>

struct student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter student %d's name: ", i + 1);
        scanf(" %99[^\n]", students[i].name);

        printf("Enter student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
    }

    printf("\nStored information:\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d, score %.1f\n",
               i + 1,
               students[i].name,
               students[i].age,
               students[i].score);
    }

    return 0;
}