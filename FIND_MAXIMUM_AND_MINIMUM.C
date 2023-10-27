#include <stdio.h>
int main() {
    int n, i;
    float arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0; i<n; ++i) {
        printf("Enter number%d: ",i+1);
        scanf("%f",&arr[i]);
    }
    float max=arr[0], min=arr[0];
    for(i=1; i<n; ++i) {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum element = %.2f\n", max);
    printf("Minimum element = %.2f\n", min);
    return 0;
}
