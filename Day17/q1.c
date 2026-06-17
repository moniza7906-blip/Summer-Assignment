#include<stdio.h>
int main()
{
int arr1[100],arr2[100],arr3[100];
int n1,n2,i;
printf("enter size of first array");
scanf("%d",&n1);
printf("enter elements of first array:\n");
for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}
printf("enter size of second array");
scanf("%d",&n2);
printf("enter elements of second array:\n");
for (i = 0; i < n2; i++)
{
scanf("%d",&arr2[i]);    
}
for(i=0;i<n1;i++){
    arr3[i]=arr1[i];
}
for(i=0;i<n2;i++)
{
    arr3[n1+i]=arr2[i];
}
printf("merged array:\n");
for(i=0;i<n1+n2;i++){
    printf("%d",arr3[i]);
}
return 0;
}