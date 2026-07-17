#include <stdio.h>

int main(){
    char name[20];
    int id;
    float program, physics, calculus, gpa;


    printf("Enter your name:");
    scanf("%s", &name);
    printf("Enter your student ID:");
    scanf("%d", &id);
    printf("Enter your Programmin score:");
    scanf("%f", &program);
    printf("Enter your Physics score:");
    scanf("%f", &physics);
    printf("Enter your Calculus score:");
    scanf("%f", &calculus);
    gpa = (program + physics + calculus)/ 3;

    printf("Hi %s(%d)! Your GPA is %0.2f ", name, id, gpa);
    return 0;
}