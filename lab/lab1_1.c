#include <stdio.h>

int main() {
  int id;
  int mark;
  char grade;
  printf("Enter Student ID:\n");
  scanf("%d", &id);
  while (id != -1) {
    printf("Enter Mark:\n");
    scanf("%d", &mark);

    if (mark >= 75 && mark <= 100) {
      grade = 'A';
    } else if (mark >= 65) {
      grade = 'B';
    } else if (mark >= 55) {
      grade = 'C';
    } else if (mark >= 45) {
      grade = 'D';
    } else if (mark >= 0) {
      grade = 'F';
    } else {
      printf("Invalid mark!\n");
      printf("Enter Student ID:\n");
      scanf("%d", &id);
      continue;
    }

    printf("Grade = %c\n", grade);
    printf("Enter Student ID:\n");
    scanf("%d", &id);
  }
  return 0;
}
