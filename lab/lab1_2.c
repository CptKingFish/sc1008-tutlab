#include <stdio.h>

int main() {
  int lines;
  float total = 0;
  int count = 0;
  int num;

  printf("Enter number of lines:\n");
  scanf("%d", &lines);

  for (int i = 1; i <= lines; i++) {
    total = 0;
    count = 0;
    printf("Enter line %d (end with -1):\n", i);
    scanf("%d", &num);
    while (num != -1) {
      total += num;
      count++;
      scanf("%d", &num);
    }
    printf("Average = %.2f\n", total / count);
  }
  return 0;
}
