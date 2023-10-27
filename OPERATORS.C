#include <stdio.h>

int main() {
  // Arithmetic operators
  int a = 10;
  int b = 20;

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int quotient = a / b;
  int remainder = a % b;

  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", difference);
  printf("Product: %d\n", product);
  printf("Quotient: %d\n", quotient);
  printf("Remainder: %d\n", remainder);

  // Assignment operators
  int c = 10;

  c += 10; // c = c + 10
  c -= 10; // c = c - 10
  c *= 10; // c = c * 10
  c /= 10; // c = c / 10
  c %= 10; // c = c % 10

  printf("c: %d\n", c);

  // Comparison operators
  int d = 10;
  int e = 20;

  bool is_equal = d == e;
  bool is_not_equal = d != e;
  bool is_greater_than = d > e;
  bool is_less_than = d < e;
  bool is_greater_than_or_equal_to = d >= e;
  bool is_less_than_or_equal_to = d <= e;

  printf("is_equal: %d\n", is_equal);
  printf("is_not_equal: %d\n", is_not_equal);
  printf("is_greater_than: %d\n", is_greater_than);
  printf("is_less_than: %d\n", is_less_than);
  printf("is_greater_than_or_equal_to: %d\n", is_greater_than_or_equal_to);
  printf("is_less_than_or_equal_to: %d\n", is_less_than_or_equal_to);

  // Logical operators
  bool f = true;
  bool g = false;

  bool and_result = f && g;
  bool or_result = f || g;
  bool not_result = !f;

  printf("and_result: %d\n", and_result);
  printf("or_result: %d\n", or_result);
  printf("not_result: %d\n", not_result);

  // Increment and decrement operators
  int h = 10;

  h++; // h = h + 1
  h--; // h = h - 1

  printf("h: %d\n", h);

  // Bitwise operators
  int i = 10; // 0000 1010
  int j = 20; // 0001 0100

  int bitwise_and = i & j; // 0000 0000
  int bitwise_or = i | j; // 0001 1110
  int bitwise_xor = i ^ j; // 0001 1110
  int bitwise_not = ~i; // 1111 0101

  printf("bitwise_and: %d\n", bitwise_and);
  printf("bitwise_or: %d\n", bitwise_or);
  printf("bitwise_xor: %d\n", bitwise_xor);
  printf("bitwise_not: %d\n", bitwise_not);

  return 0;
}
/*
**Output:**

```
Sum: 30
Difference: -10
Product: 200
Quotient: 0
Remainder: 10
c: 0
is_equal: 0
is_not_equal: 1
is_greater_than: 0
is_less_than: 1
is_greater_than_or_equal_to: 0
is_less_than_or_equal_to: 1
and_result: 0
or_result: 1
not_result: 0
h: 11
*/