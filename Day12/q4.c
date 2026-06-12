#include<stdio.h>
int perfect(int n)
{
    int sum=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
        if(sum==n)
        return 1;
        else
        return 0;
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(perfect(num))
    printf("perfect number");
    else
    printf("not a perfect number");
    return 0;
}