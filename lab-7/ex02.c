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

    int maxindex = 0;
    for (int h = 1; h < 3; h++) {
        if (students[h].score > students[maxindex].score) {
           maxindex = h;
        }
    }

    printf("The highest score is %s's at %0.2f. ", students[maxindex].name, students[maxindex].score);
    

    return 0;
}