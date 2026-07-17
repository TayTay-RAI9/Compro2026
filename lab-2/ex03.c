#include <stdio.h>

int main() {
    int age, weight;
    float height;
    char gender[2], education[20], name[20];

    printf("Enter your name:");
    scanf( "%s", &name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your height:");
    scanf("%f", &height);
    printf("Enter your weight:");
    scanf("%d", &weight);
    printf("Enter your Gender:");
    scanf("%s", gender);
    printf("Enter your Education Qualification:");
    scanf(" %[^\n]", &education);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %f\n", height);
    printf("Weight: %d\n", weight);
    printf("Education: %s\n", education);
    return 0;
}