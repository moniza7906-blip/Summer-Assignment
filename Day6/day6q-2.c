#include<stdio.h>
#include<math.h>
int main()
{
    int binary,decimal=0,rem,i=0;
    printf("enter a binary number");
    scanf("%d",&binary);
    while (binary>0)
    {
        rem=binary%10;
        decimal=decimal+rem*pow(2,i);
    binary=binary/10; i++;   }

printf("decimal=%d",decimal);
return 0;
}