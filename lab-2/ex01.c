#include <stdio.h>

int main(){
    float fvalue;
    int ivalue;
    char cvalue;

    printf("Please enter an integer value:");
    scanf("%d", &ivalue);
    printf("You entered%d\n ", ivalue);
    printf("Please Enter a float value:");
    scanf("%f", &fvalue);
    printf("You entered%0.2f\n ", fvalue);
    printf("Please Enter a character:");
    scanf(" %c", &cvalue);
    printf("You entered%c\n ", cvalue);
    return 0;
}