#include <stdio.h>

int main() {
  // Declare variables of different data types
  int age;
  char name[20];
  float height;
  double radius;
  bool is_student;

  // Assign values to variables
  age = 25;
  strcpy(name, "Bard");
  height = 1.75;
  radius = 2.5;
  is_student = true;

  // Print the values of the variables
  printf("Age: %d\n", age);
  printf("Name: %s\n", name);
  printf("Height: %.2f\n", height);
  printf("Radius: %.2f\n", radius);
  printf("Is student: %d\n", is_student);

  // Use variables in expressions
  int years_to_retirement = 65 - age;
  float circumference = 2 * 3.14159 * radius;
  bool is_adult = age >= 18;

  // Print the results of the expressions
  printf("Years to retirement: %d\n", years_to_retirement);
  printf("Circumference: %.2f\n", circumference);
  printf("Is adult: %d\n", is_adult);

  // Use variables in input and output
  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Your age is: %d\n", age);
  printf("Your name is: %s\n", name);

  // Use variables in conditional statements
  if (age >= 18) {
    printf("You are an adult.\n");
  } else {
    printf("You are a minor.\n");
  }

  if (height >= 1.80) {
    printf("You are tall.\n");
  } else {
    printf("You are not tall.\n");
  }

  return 0;
}
