#include<stdio.h>
int main ()
{
int n;
int factorial =1;
printf("enter a number ");
scanf ("%d", &n);
for (int i=1; i<=n;i++)
{
factorial=factorial*i;
}   
printf("factorial of %d =%d \n",n,factorial);
return 0;
}
