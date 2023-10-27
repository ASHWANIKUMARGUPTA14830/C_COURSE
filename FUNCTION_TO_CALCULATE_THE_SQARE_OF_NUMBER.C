#include <stdio.h>

// Function to calculate the square of a number
int square(int x) {
    return x * x;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);

    printf("The square of %d is %d\n", num, result);

    return 0;
}
