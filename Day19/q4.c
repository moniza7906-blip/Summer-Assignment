#include<stdio.h>
int main(){
    int a[10][10],n;
    int i,j,sum=0;
    printf("enter the order of matrix:");
    scanf("%d", &n);
    printf("enter elements of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=sum+a[i][i];
    }
    printf("sum of diagonal elements =%d",sum);
    return 0;
}