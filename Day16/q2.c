#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfreq=0,maxelement;
    for (i = 0; i < n; i++)
    {
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=arr[i];
        }
    }
    printf("element with maximum frequency=%d\n",maxelement);
    printf("frequency =%d\n",maxfreq);
    return 0;
}