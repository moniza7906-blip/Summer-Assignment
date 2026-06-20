#include <stdio.h>

int main()
{
    int a[10][10], r, c;
    int i, j, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        sum = 0;

        for(j = 0; j < c; j++)
        {
            sum += a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}