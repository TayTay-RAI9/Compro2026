#include <stdio.h>

int main(){
    int age;
    char firstname[20], lastname[20], university[20];
    float height;

    printf("Enter your full name: ");
    scanf("%s", firstname);
    scanf("%s", lastname);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your height:");
    scanf("%f", &height);
    printf("enter your University name:");
    scanf(" %[^\n]", university);

    printf("Hi! Everyone. This is %c. %s from %s. I am %d years old and my height is %0.2f", firstname[0], lastname, university, age, height);
    return 0;
}