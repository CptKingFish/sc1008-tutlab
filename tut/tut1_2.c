#include <stdio.h>

int main() {
    int digits = 0;
    int letters = 0;
    char ch;
    printf("Enter your characters (# to end) :\n");
    while ((ch = getchar()) != '#') {
        if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        }
    }

    printf("The number of digits: %d\n", digits);
    printf("The number of letters: %d", letters);
    return 0;
}
