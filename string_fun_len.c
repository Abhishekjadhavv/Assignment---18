// Write a function to calculate length of the string

#include <stdio.h>
int str_len(char str[]);
int main()
{
    char str[20];
    printf("Enter any string");
    fgets(str, 20, stdin);
    printf("length of the string is %d", str_len(str));
    return 0;
}

int str_len(char str[])
{
    int len = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] != 10)
        {
            len++;
        }
    }

    return len;
}