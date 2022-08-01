// Write a function to transform string into uppercase

#include <stdio.h>
void str_upper(char str[]);
int main()
{
    char str[20] = "abhishek jadhav";
    str_upper(str);
    printf("%s", str);
    return 0;
}

void str_upper(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}