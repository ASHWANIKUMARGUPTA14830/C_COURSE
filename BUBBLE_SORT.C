#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; ++i) {
        printf("Enter element%d: ",i+1);
        scanf("%d",&arr[i]);
    }

     for(i=0; i<n-1; ++i) { // bubble sort logic
         for(j=i+1; j<n; ++j) {
             if(arr[i]>arr[j]) {
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }

     printf("\nSorted array: ");
     for(i=0; i<n; ++i)
         printf("%d ",arr[i]);
     return 0;
}
