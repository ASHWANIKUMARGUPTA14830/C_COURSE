#include <stdio.h>

int main() {
    int numbers[5] = {5, 10, 15, 20, 25};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum of numbers: %d\n", sum);

    return 0;
}
