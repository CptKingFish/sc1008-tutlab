#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);

int main() {
  int number, result = INIT_VALUE;
  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("extOddDigits1(): %d\n", extOddDigits1(number));
  extOddDigits2(number, &result);
  printf("extOddDigits2(): %d\n", result);
  return 0;
}
int extOddDigits1(int num) {
  int sol = 0;
  int zeroes = 1;

  while (num > 0) {
    if (num % 2 != 0) {
      sol += (num % 10) * zeroes;
      zeroes *= 10;
    }
    num /= 10;
  }

  return sol ? sol : -1;
}

void extOddDigits2(int num, int *result) { *result = extOddDigits1(num); }
