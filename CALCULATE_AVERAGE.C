#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0, avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    float arr[n];
    for(i=0; i<n; ++i) {
        printf("Enter number%d: ",i+1);
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    avg = sum/n;
    printf("Average = %.2f",avg);
    return 0;
}
