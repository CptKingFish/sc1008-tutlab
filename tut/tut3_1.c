#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getFrequency(int histogram[10], int n);
void printFrequency(int histogram[10]);

int main() {
  int frequencies[10];
  int total;
  
  printf("Please input the number of random numbers: ");
  scanf("%d", &total);
  srand(time(NULL));

  getFrequency(frequencies, total);
  printFrequency(frequencies);
  
  return 0;
}

void getFrequency(int histogram[10], int n) {
  int i;

  for (i = 0; i < 10; i++) {
    histogram[i] = 0;
  }

  for (i = 0; i < n; i++) {
    histogram[(rand() % 100) / 10]++;
  }
}

void printFrequency(int histogram[10]) {
  int i, j;

  for (i = 0; i < 10; i++) {
    printf("%2d - %2d   |", i * 10, (i * 10) + 9);
    for (j = 0; j < histogram[i]; j++) putchar('*');
    putchar('\n');
  }
}
