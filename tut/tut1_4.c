#include <stdio.h>

int main() {
      float sol = 1;
      float prev = 1;
      float x;
      printf("Enter x:\n");
      scanf("%f", &x);

      for (int i = 1; i <= 10; i++) {
          prev *= x / i;
          sol += prev;
      }
      
      printf("Result = %.2f", sol);
      return 0;
}
