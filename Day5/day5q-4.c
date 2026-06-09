#include<stdio.h>
int main()
    {
int num,largestfactor=0;
printf("enter a number");
scanf("%d",&num);
while (num % 2==0){
    largestfactor =2;
    num/=2;
}
for (int i=3;i<=num/2;i+=2){
    while (num %i==0){
        largestfactor=i;
        num/=i;
    }
}
if (num>2)
largestfactor=num;
printf("largest prime factor=%d",largestfactor);
return 0;

    }