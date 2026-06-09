#include<stdio.h>
int main()
{
int n,i,prime=1;
printf("dnter a number");
scanf("%d",&n);
if (n<=1)
{
    prime=0;
}
else
{
    for ( i = 2; i < n; i++)
    {
        if (n%i==0){
            prime=0;
            break;
        }
    }
    
}
if (prime)
printf("%d is a prime number",n);
else
printf("%d is not a prime number",n);
return 0;
}