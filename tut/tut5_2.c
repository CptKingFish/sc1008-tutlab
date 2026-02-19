#include <stdio.h>
#include <string.h>

struct student {
  char name[20];    /* student name */
  double testScore; /* test score */
  double examScore; /* exam score */
  double total;     /* total = (testScore+examScore)/2 */
};

double average();

int main() {
  printf("average(): %.2f\n", average());
  return 0;
}

double average() {
  struct student s[50];
  int i = 0;
  char *p;
  double subTotal = 0;

  printf("Enter student name:\n");
  fgets(s[i].name, 20, stdin);
  if ((p = (strchr(s[i].name, '\n'))))
    *p = '\0';

  while (i < 50 && strcmp(s[i].name, "END")) {
    printf("Enter test score:\n");
    scanf("%lf", &s[i].testScore);
    printf("Enter exam score:\n");
    scanf("%lf", &s[i].examScore);
    s[i].total = (s[i].testScore + s[i].examScore) / 2;
    printf("Student %s total = %.2lf\n", s[i].name, s[i].total);
    subTotal += s[i].total;
    i++;
    getchar();
    printf("Enter student name:\n");
    fgets(s[i].name, 20, stdin);
    if ((p = (strchr(s[i].name, '\n'))))
      *p = '\0';
  }
  return i ? subTotal / i : 0;
}
