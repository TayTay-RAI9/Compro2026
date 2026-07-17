#include <stdio.h>

int main() {
    int minutes1, minutes2, hours;

    printf("Enter total minutes:");
    scanf("%d", &minutes1);
    hours = minutes1 / 60;
    minutes2 = minutes1 % 60;
    printf(" %d minutes is %d hour(s) and %d minutes ", minutes1, hours, minutes2);
    return 0;
}