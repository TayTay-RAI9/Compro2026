#include <stdio.h>

struct coordinates {
    float x , y;
};

int main() {
    struct coordinates set1;
    struct coordinates set2;

    printf("x1: ");
    scanf("%f", &set1.x);
    printf("y1: ");
    scanf("%f", &set1.y);
    printf("x2: ");
    scanf("%f", &set2.x);
    printf("y2: ");
    scanf("%f", &set2.y);

    float sumy = set1.y + set2.y;
    float sumx = set1.x + set2.x;
    printf("Resultant vector is equivalent to %0.1fi + %0.1fj", sumx, sumy);
    
    return 0;
}