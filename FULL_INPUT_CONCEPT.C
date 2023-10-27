#include <stdio.h>

int main() {
  int age;
  char name[20];
  char ch;
  float height;
  int is_student;

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter a character: ");
  scanf("%c", &ch);

  printf("Enter your height: ");
  scanf("%f", &height);

  printf("Are you a student? (1 for yes, 0 for no): ");
  scanf("%d", &is_student);

  printf("Your age is %d.\n", age);
  printf("Your name is %s.\n", name);
  printf("The character you entered is %c.\n", ch);
  printf("Your height is %.2f.\n", height);

  if (is_student) {
    printf("You are a student.\n");
  } else {
    printf("You are not a student.\n");
  }

  return 0;
}
