#include <stdio.h>
int main() {
     int n, i, j, key;
     printf("Enter the number of elements: ");
     scanf("%d",&n);
     int arr[n];
     for(i=0; i<n; ++i) {
         printf("Enter element%d: ",i+1);
         scanf("%d",&arr[i]);
     }

     for(i=1; i<n; ++i) { // insertion sort logic
         key=arr[i];
         j=i-1;

         while(j>=0 && arr[j]>key) {
             arr[j+1]=arr[j];
             --j;
         }

         arr[j+1]=key;

     }

     printf("\nSorted array: ");
     for(i=0; i<n; ++i)
         printf("%d ",arr[i]);
     return 0;

}
