#include<stdio.h>
int main (){
int a,b,x,y,gcd,lcm;
printf("enter two numbers");
scanf("%d %d",&a,&b);
x=a;
y=b;
while (y!=0){
    int temp=y;
    y=x%y;
    x=temp;
}
gcd=x;
lcm=( a * b) / gcd;
printf("LCM=%d",lcm);
}