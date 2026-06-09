#include<stdio.h>
#include<math.h>
int main ()
{
int num,temp,remainder,digits=0;
int sum=0;

printf("enter a number");
scanf("%d",&num);
temp=num;
while (temp!=0){
    digits++;
    temp/=10;
}
temp=num;
while (temp!=0){
    remainder = temp % 10;
    sum += pow(remainder,digits);
    temp/=10;
}
if (sum==num)
printf("%d is an armastrong number",num);
else 
printf("%d is not an armstrong number",num);
return 0;
}