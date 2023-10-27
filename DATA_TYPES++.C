#include <stdio.h>

// Define a new data type called `Person` using typedef.
typedef struct {
  int age;
  char name[20];
  float height;
} Person;

int main() {
  // Declare a variable of type `Person` called `person1`.
  Person person1;

  // Assign values to the members of the `person1` variable.
  person1.age = 25;
  strcpy(person1.name, "Bard");
  person1.height = 1.75;

  // Print the values of the members of the `person1` variable.
  printf("Person 1:\n");
  printf("  Age: %d\n", person1.age);
  printf("  Name: %s\n", person1.name);
  printf("  Height: %.2f\n", person1.height);

  // Declare a pointer to a `Person` struct called `person2`.
  Person *person2;

  // Allocate memory for a `Person` struct using the `malloc()` function.
  person2 = malloc(sizeof(Person));

  // Assign values to the members of the `Person` struct pointed to by `person2`.
  person2->age = 30;
  strcpy(person2->name, "Alice");
  person2->height = 1.65;

  // Print the values of the members of the `Person` struct pointed to by `person2`.
  printf("Person 2:\n");
  printf("  Age: %d\n", person2->age);
  printf("  Name: %s\n", person2->name);
  printf("  Height: %.2f\n", person2->height);

  // Free the memory that was allocated for the `Person` struct pointed to by `person2` using the `free()` function.
  free(person2);

  return 0;
}
