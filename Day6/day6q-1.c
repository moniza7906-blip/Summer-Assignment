#include<stdio.h>
int main()
{
    int num,binary=0,place=1;
    printf("enter a decimal number");
    scanf("%d",&num);
    if (num==0){
        printf("binary:0");
        return 0;
    }
while(num>0)
{
    int rem=num%2;
    binary=binary+rem*place;
    place=place*10;
    num=num/2;
}
printf("binary:%d",binary);
return 0;
}