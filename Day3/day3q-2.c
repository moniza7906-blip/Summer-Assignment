#include<stdio.h>
int main()
{
int start,end,i,j,prime;
printf("enter starting number");
scanf("%d",&start);
printf("enter ending number");
scanf("%d",&end);
printf("prime numbers between %d and %d are\n",start,end);
for ( i = start; i <=end; i++)
{
if (i<=1)
continue;
prime=1;
for(j=2;j<i;j++){
    if (i%j==0){
        prime=0;
        break;
    }
}
if (prime) 
printf("%d",i);  
}
return 0;
}