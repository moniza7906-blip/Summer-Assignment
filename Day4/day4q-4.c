#include<stdio.h>
#include<math.h>
int main()
{
int start,end;
printf("enter starting number");
scanf("%d",&start);
printf("enter ending number");
scanf("%d",&end);
printf("Armstrong numbers between %d and %d are:\n",start,end);
for (int num=start;num<=end;num++){
    int temp=num,digit=0,sum=0,rem;
    while(temp!=0){
        digit++;
        temp/=10;
    }
temp=num;
while (temp!=0){
    rem=temp%10;
    sum += pow(rem,digit);
    temp/=10;
}
if (sum==num)
printf("%d",num);
}
return 0;
}