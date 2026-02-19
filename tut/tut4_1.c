#include <stdio.h>
#include <string.h>

void processString(char *str, int *totVowels, int *totDigits);

int main() {
  char str[50], *p;
  int totVowels, totDigits;
  printf("Enter the string: \n");
  fgets(str, 50, stdin);
  if ((p = strchr(str, '\n')))
    *p = '\0';
  processString(str, &totVowels, &totDigits);
  printf("Total vowels = %d\n", totVowels);
  printf("Total digits = %d\n", totDigits);
  return 0;
}

void processString(char *str, int *totVowels, int *totDigits) {
  while (*str != '\0') {
    if (*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' ||
        *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' ||
        *str == 'u' || *str == 'U') {
      (*totVowels)++;
    } else if (*str >= '0' && *str <= '9')
      (*totDigits)++;

    str++;
  }
}
