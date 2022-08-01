// Write a function to count words in a given string

#include <stdio.h>
int count_words(char str[]);
int main()
{
    char str[30];
    printf("Enter any string");
    fgets(str, 30, stdin);
    printf("%d words in this string", count_words(str));
    return 0;
}

int count_words(char str[])
{
    int count = 1;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 32 && str[i+1]!=10 && str[i+1]>='a' && str[i+1]<='z'|| str[i+1]>='A' && str[i+1]<='Z')
        {
            count++;
        }
    }

    return count;
}