#include<stdio.h>

void swap(int* a,int* b) { // swap function

     int temp=*a;

     *a=*b;

     *b=temp;

}

int partition(int arr[],int low,int high) { // partition function

     int pivot=arr[high];

     int i=(low-1);

     for(int j=low;j<=high-1;++j) {

          if(arr[j]<pivot) {

               ++i;

               swap(&arr[i],&arr[j]);

          }

     }

     swap(&arr[i+1],&arr[high]);

     return (i+1);

}

void quickSort(int arr[],int low,int high) { // quick sort function

     if(low<high) {

          int pi=partition(arr,low,high);

          quickSort(arr,low,pi-1);

          quickSort(arr,pi+1,high);

     }

}

int main() {

     int n,i;

     printf("Enter the number of elements: ");

     scanf("%d",&n);

     int arr[n];

     for(i=0;i<n;++i) {

          printf("\nEnter element%d: ",i+1);

          scanf("%d",&arr[i]);

     }

     quickSort(arr,0,n-1);

     printf("\nSorted array: ");

     for(i=0;i<n;++i)

          printf("%d ",arr[i]);

return 0;

}
