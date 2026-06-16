#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter value of n");
scanf("%d",&n);
int arr[n-1];
printf("enter %d elements");
for(i=0;i<n-1;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
int total=n*(n+1)/2;
int missing = total-sum;
printf("missing number=%d",missing);
return 0;
}