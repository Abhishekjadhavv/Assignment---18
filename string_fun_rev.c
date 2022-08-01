// Write a function to reverse a string.

#include <stdio.h>
int str_len(char str[]);
void str_rev(char str[]);
int main()
{
    char str[20];
    printf("Enter any string");
    fgets(str, 20, stdin);
    str_rev(str);
    printf("%s",str);
    return 0;
}

int str_len(char str[])
{
    int len = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != 10)
            len++;
    return len;
}

void str_rev(char str[])
{
    int len = str_len(str);

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}