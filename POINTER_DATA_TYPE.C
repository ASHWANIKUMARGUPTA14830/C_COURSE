#include <stdio.h>

int main() {
    int num = 42;
    int *numPtr = &num;

    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *numPtr);

    return 0;
}
