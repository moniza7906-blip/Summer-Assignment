#include<stdio.h>
int main()
{
int n,i;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
printf("enter array elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}    
int last=arr[n-1];
for(i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=last;
printf("array after right rotation");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}