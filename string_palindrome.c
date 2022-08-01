// Write a function to check whether a given string is palindrome or not.

#include <stdio.h>
#include <string.h>
void str_palin(char str[]);
int main()
{
    char str[20] = "nitin";
    str_palin(str);
    return 0;
}

void str_palin(char str[])
{
    int len = strlen(str);
    char temp[len + 1];
    strcpy(temp, str);

    for (int i = 0; i < len / 2; i++)
    {
        char ch = temp[i];
        temp[i] = temp[len - 1 - i];
        temp[len - 1 - i] = ch;
    }

    if (!strcmp(str, temp))
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}