#include <stdio.h>

int main() {
      float sol = 1;
      float x;
      printf("Enter x:\n");
      scanf("%f", &x);

      for (int i = 1; i <= 10; i++) {
          float numerator = 1;
          int denominator = 1;
          for (int j = i; j >= 1; j--) {
              numerator *= x;
              denominator *= j;
          }
          sol += numerator / denominator;
      }
      
      printf("Result = %.2f", sol);
      return 0;
}
