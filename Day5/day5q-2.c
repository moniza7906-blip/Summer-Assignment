#include<stdio.h>
int main()
{
int num,temp,rem,sum=0;
printf("enter a number");
scanf("%d",&num);
temp=num;
while (temp!=0){
    rem=temp%10;
    int fact=1;
    for (int i=1;i<=rem;i++){
        fact*=i;
    }
    sum+=fact;
    temp/=10;
}
if (sum==num)
printf("%d is a strong number");
else
printf("%d is not a strong number",num);
return 0;
}