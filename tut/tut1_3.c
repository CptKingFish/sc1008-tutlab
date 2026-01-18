#include <stdio.h>

int main() {
      int height;
      char heightChar; 
      do {
          printf("Enter the height:\n");
          heightChar = getchar();
          while (getchar() != '\n');
      } while (heightChar < '1' || heightChar > '9');
      height = heightChar - '0';
      
      printf("Pattern:\n");
      for (int i = 0; i < height; i++) {
          for (int j = 0; j <= i; j++) {
              printf("%d", (i % 3) + 1);
          }
          printf("\n");
      }
      
      return 0;
}
