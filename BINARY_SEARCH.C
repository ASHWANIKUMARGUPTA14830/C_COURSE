#include <stdio.h>
int main() {
    int n, i, j, key, mid, flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; ++i) {
        printf("Enter element%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; ++i) { // sorting in ascending order using bubble sort
        for(j=i+1; j<n; ++j) {
            if(arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<n; ++i)
        printf("%d ",arr[i]);
        
    printf("\nEnter the element to search: ");
    scanf("%d",&key);

    int low=0, high=n-1;

    while(low<=high) { // binary search logic
        mid=(low+high)/2;

        if(arr[mid]==key) {
            flag=1;
            break;
        }

        else if(arr[mid]<key)
            low=mid+1;

        else
            high=mid-1;

    }

    if(flag==1)
        printf("\n%d found at position %d",key,mid+1);
    
    else
        printf("\n%d not found in the array",key);

return 0;

}

