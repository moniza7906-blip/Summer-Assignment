#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length; i++)
    {
        rev[i] = str[length - 1 - i];
    }

    rev[i] = '\0';

    printf("Reversed string = %s", rev);

    return 0;
}