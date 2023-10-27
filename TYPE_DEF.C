#include <stdio.h>

typedef int Age;
typedef double Price;

int main() {
    Age personAge = 30;
    Price itemPrice = 19.99;

    printf("Age: %d\n", personAge);
    printf("Price: %.2lf\n", itemPrice);

    return 0;
}
