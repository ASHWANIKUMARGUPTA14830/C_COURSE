#include <stdio.h>

int main() {
    int integerVar = 42;
    short shortVar = 32767;
    long longVar = 2147483647;
    unsigned int unsignedVar = 12345;
    unsigned long ulongVar = 4000000000UL;

    printf("Int: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Unsigned Int: %u\n", unsignedVar);
    printf("Unsigned Long: %lu\n", ulongVar);

    return 0;
}
