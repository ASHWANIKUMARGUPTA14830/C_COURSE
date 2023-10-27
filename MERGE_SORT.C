#include <stdio.h>

void merge(int arr[], int leftIndex, int midIndex, int rightIndex) { // merge function

     int leftSize=midIndex-leftIndex+1, rightSize=rightIndex-midIndex;

     int leftArr[leftSize], rightArr[rightSize];

     for(int i=0; i<leftSize; ++i)
         leftArr[i]=arr[leftIndex+i];

     for(int j=0; j<rightSize; ++j)
         rightArr[j]=arr[midIndex+j+1];

     int leftIndexCopy=0, rightIndexCopy=0;

     int sortedIndex=leftIndex;

     while(leftIndexCopy<leftSize && rightIndexCopy<rightSize) {

         if(leftArr[leftIndexCopy]<=rightArr[rightIndexCopy]) {

             arr[sortedIndex]=leftArr[leftIndexCopy];
             ++leftIndexCopy;

         }

         else {

             arr[sortedIndex]=rightArr[rightIndexCopy];
             ++rightIndexCopy;

         }

         ++sortedIndex;

     }

     while(leftIndexCopy<leftSize) {

         arr[sortedIndex]=leftArr[leftIndexCopy];
         ++leftIndexCopy;
         ++sortedIndex;

     }

     while(rightIndexCopy<rightSize) {

         arr[sortedIndex]=rightArr[rightIndexCopy];
         ++rightIndexCopy;
         ++sortedIndex;

     }

}

void mergeSort(int arr[], int leftIndex, int rightIndex) { // merge sort function

     if(leftIndex<rightIndex) {

         int midIndex=(leftIndex+rightIndex)/2;

         mergeSort(arr,leftIndex,midIndex);

         mergeSort(arr,midIndex+1,rightIndex);

         merge(arr,leftIndex,midIndex,rightIndex);

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

     mergeSort(arr, 0,n-1);

     printf("\nSorted array: ");

     for(i=0;i<n;++i)

          printf("%d ",arr[i]);

return 0;

}
