#include <stdio.h>

float base(float length, float width) {
    return length * width;
}

float perim(float length, float width) {
    return 2 * (length + width);
}

float volume(float length, float width, float height) {
    return length * width * height;
}

int main() {
    float length, width, height;
        printf("Enter length, width, and height in cm: ");
        scanf("%f %f %f", &length, &width, &height);
        if (length > 0 && width > 0 && height > 0) {
        printf("Error: All dimensions must be greater than 0.\n");
    }

    printf("Base Area: %.2f\n", base(length, width));
    printf("Perimeter: %.2f\n", perim(length, width));
    printf("Volume: %.2f\n", volume(length, width, height));

    return 0;
}