#include <stdio.h>

int main() {
    float floatVar = 3.14159;
    double doubleVar = 2.71828;
    long double longDoubleVar = 1.4142135623730950488;

    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);

    return 0;
}
