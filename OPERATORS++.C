#include <stdio.h>

struct ComplexNumber {
  float real;
  float imaginary;
};

ComplexNumber addComplexNumbers(ComplexNumber c1, ComplexNumber c2) {
  ComplexNumber result;

  result.real = c1.real + c2.real;
  result.imaginary = c1.imaginary + c2.imaginary;

  return result;
}

ComplexNumber multiplyComplexNumbers(ComplexNumber c1, ComplexNumber c2) {
  ComplexNumber result;

  result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
  result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);

  return result;
}

int main() {
  ComplexNumber c1 = {1.0, 2.0};
  ComplexNumber c2 = {3.0, 4.0};

  ComplexNumber sum = addComplexNumbers(c1, c2);
  ComplexNumber product = multiplyComplexNumbers(c1, c2);

  printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);
  printf("Product of complex numbers: %.2f + %.2fi\n", product.real, product.imaginary);

  return 0;
}
/*

**Output:**

```
Sum of complex numbers: 4.00 + 6.00i
Product of complex numbers: -5.00 + 10.00i
```

This code defines a `ComplexNumber` struct that has two members: `real` and `imaginary`. The `addComplexNumbers()` function adds two complex numbers together. The `multiplyComplexNumbers()` function multiplies two complex numbers together.

The `main()` function creates two `ComplexNumber` structs called `c1` and `c2`. The `sum` variable is assigned the result of adding `c1` and `c2` together. The `product` variable is assigned the result of multiplying `c1` and `c2` together.

The `printf()` statements are used to print the sum and product of the complex numbers.

This code demonstrates how to use operators with user-defined data types.*/