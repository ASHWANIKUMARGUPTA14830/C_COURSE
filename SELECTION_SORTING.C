#include <stdio.h>
int main() {
     int n, i, j, minIndex;
     printf("Enter the number of elements: ");
     scanf("%d",&n);
     int arr[n];
     for(i=0; i<n; ++i) {
         printf("Enter element%d: ",i+1);
         scanf("%d",&arr[i]);
     }

     for(i=0; i<n-1; ++i) { // selection sort logic
         minIndex=i;

         for(j=i+1; j<n; ++j) {
             if(arr[j]<arr[minIndex])
                 minIndex=j;
         }

         int temp=arr[minIndex];
         arr[minIndex]=arr[i];
         arr[i]=temp;

     }

     printf("\nSorted array: ");
     for(i=0; i<n; ++i)
         printf("%d ",arr[i]);
     return 0;

}
