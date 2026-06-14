#include<stdio.h>
int main()
{
    int arr[100],n,i,key,count=0;
    printf("enter the number of elemens");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements whose frequency is to be found");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            count++;
        }
    }
    printf("frequency of %d =%d",key,count);
    return 0;
}