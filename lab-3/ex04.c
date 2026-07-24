#include <stdio.h>

int main() {
    char name[50], grade;
    float calc, phys, comp, avg;
    printf("Enter your name: ");
    scanf(" %s", name);
    printf("Enter your calculus score: ");
    scanf("%f", &calc);
    printf("Enter your physics grade: ");
    scanf("%f", &phys);
    printf("Enter your computer programming grade: ");
    scanf("%f", &comp);

    avg = (calc + phys + comp) / 3;

    if (avg >= 80) {
        grade = 'A';
    }
    else if (avg <= 80 || avg >= 70) {
        grade = 'B';
    }
    else if (avg <= 70 || avg >= 60) {
        grade = 'C';
    }
    else if (avg <= 60 || avg >= 50) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    printf("%s , your average is %f. Your grade is %c.", name, avg, grade);
}