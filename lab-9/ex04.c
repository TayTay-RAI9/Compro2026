#include <stdio.h>

void countCharacters(char text[]) {
    int letters = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; text[i] != '\0'; i++) {

        if ((text[i] >= 'A' && text[i] <= 'Z') ||
            (text[i] >= 'a' && text[i] <= 'z')) {
            letters++;
        }

        else if (text[i] >= '0' && text[i] <= '9') {
            digits++;
        }

        else if (text[i] != '\n') {
            special++;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special Characters / Symbols: %d\n", special);
}

int main() {
    char text[100];

    printf("Input: ");
    fgets(text, 100, stdin);

    countCharacters(text);

    return 0;
}