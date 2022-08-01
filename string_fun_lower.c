// Write a function to transform string into lowercase

#include <stdio.h>
void str_lower(char str[]);
int main()
{
    char str[20] = "ABHISHEK JADHAV";
    str_lower(str);
    printf("%s", str);
    return 0;
}

void str_lower(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}