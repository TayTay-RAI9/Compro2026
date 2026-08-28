#include <stdio.h>
#include <math.h>

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

    float distance = sqrt(pow(set2.x - set1.x,2) + pow(set2.y - set1.y,2));
    printf("distance between the two is: %0.3f ", distance);
}