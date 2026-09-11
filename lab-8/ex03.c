#include <stdio.h>

int main() {
    int array[]={3,1,2,4,5,6};
    int *p = array, max = *p, min = *p;

    for (int i = 0; i < 6; i++) {
        if(*(p + i) > max) {
            max = *(p + i);
        }
        if(*(p + i) < (min)){
            min = *(p + i);
        }
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;






}