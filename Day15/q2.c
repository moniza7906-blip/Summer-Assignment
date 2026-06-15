#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int first=arr[0];
for(i=0;i<n;i++){
    arr[i]=arr[i+1];
}
arr[n-1]=first;
printf("array after left rotation");
for ( i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}
return 0;
    }
    