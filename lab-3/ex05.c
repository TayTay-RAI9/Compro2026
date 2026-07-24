#include <stdio.h>

int main() {
    float height, radius, volume;
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter radius:");
    scanf("%f", &radius);

    volume = (1.0/3.0)*(22.0/7.0)*(radius * radius)*(height);

    if (volume >= 260) {
        printf("%0.2f This cone is perfect for Supun project.", volume);
    }
    else {
        printf("%0.2f This project is not fit for supun project.", volume);
    }
    return 0;
}