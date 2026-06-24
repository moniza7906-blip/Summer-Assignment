#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation\n");
        return 0;
    }

       strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("Rotation of string\n");
    else
        printf("Not a rotation\n");

    return 0;
}