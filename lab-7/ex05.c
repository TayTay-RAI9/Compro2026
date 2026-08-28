#include <stdio.h>

struct time {
    int min, sec;
};

int main() {
    int minsum = 0;
    int secsum = 0;
    struct time set[3];
    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &set[i].min, &set[i].sec);
    }
    for (int j = 0; j < 3; j++) {
        minsum += set[j].min * 60;
        secsum += set[j].sec;
    }
    int sumall = secsum + minsum;
    printf("Total time elapsed: %d", sumall);
    return 0;
}