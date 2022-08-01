// Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

#include <stdio.h>
int str_alpha(char str[]);
int main()
{
    char str[20];
    printf("Enter any string");
    fgets(str, 20, stdin);
    if (str_alpha(str))
    {
        printf("string is alphanumeric");
    }
    else
    {
        printf("string is not alphanumeric");
    }
    return 0;
}

int str_alpha(char str[])
{
    int check_char = 0, check_digit = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            check_char = 1;
        else if (str[i] >= '0' && str[i] <= '9')
            check_digit = 1;
    }

    if (check_char && check_digit)
        return 1;

    return 0;
}