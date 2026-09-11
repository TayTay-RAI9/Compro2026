#include<stdio.h>
int main() {
    int Num[5];
    int *ptr = Num;
    for(int i = 0; i < 5; i++) {
        printf("input the number %d: ", i+1);
        scanf("%d", (ptr + i));
    }
    for(int i = 0; i < 5; i++) {
       for(int j = 0; j < 5-i-1; j++) {
           if(*(ptr + j) > *(ptr + j+1)) {
               int temp = *(ptr + j);
               *(ptr + j) = *(ptr + j+1);
               *(ptr + j+1) = temp;
           }
       }
    }
    printf("The sorted numbers are:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ",  *(ptr + i));
    }
    printf("\n");
    return 0;
}