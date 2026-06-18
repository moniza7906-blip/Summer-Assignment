#include<stdio.h>
int main()
{
    int arr[100],n,i,key;
    int low,high,mid,found=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d sorted elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while (low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==key){
        found=1;
        break;
    }
    else if(key<arr[mid]){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
    }
    if(found){
        printf("elements found at position %d",mid+1);
    }
    else{
        printf("elements not found");
    }
    return 0;
}