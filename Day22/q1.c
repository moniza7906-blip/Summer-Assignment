#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }

    return 0;
}