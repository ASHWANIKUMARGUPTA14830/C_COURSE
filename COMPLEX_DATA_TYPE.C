#include <stdio.h>

int main() {
    double _Complex c1 = 1.0 + 2.0 * I;
    double _Complex c2 = 3.0 - 4.0 * I;
    double _Complex sum = c1 + c2;

    printf("c1 = %f + %fi\n", creal(c1), cimag(c1));
    printf("c2 = %f - %fi\n", creal(c2), cimag(c2));
    printf("Sum = %f + %fi\n", creal(sum), cimag(sum));

    return 0;
}
