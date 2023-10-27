#include <stdio.h>
int main() {
    int n, i, key, flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; ++i) {
        printf("Enter element%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    for(i=0; i<n; ++i) {
        if(arr[i]==key) {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d found at position %d",key,i+1);
    else
        printf("%d not found in the array",key);
    return 0;
}
