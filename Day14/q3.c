#include<stdio.h>
int main(){


    int arr[100],n,i;
    int largest,secondlargest;
    printf("enter the number of elements ");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=secondlargest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("second largest element=%d",secondlargest);
    return 0;
}