#include<stdio.h>
int main()
    {
int n,i;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
printf("enter array element");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
}
printf("reversed array");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
    }
