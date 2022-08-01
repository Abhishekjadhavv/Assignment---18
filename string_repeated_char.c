// Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>
void find_repeated_char(char str[]);
int main()
{
    char str[20] = "abhishek jadhav";
    find_repeated_char(str);
    return 0;
}

void find_repeated_char(char str[])
{
    int len = strlen(str);
    char temp[len + 1];
    strcpy(temp, str);
    
    for (int i = 0; temp[i]; i++)
    {
        for (int j = i+1; temp[j]; j++)
        {
            if(temp[i] == temp[j] && temp[i]!=' '){
               printf("%c ",str[i]);
               temp[j] = ' ';
               break;
            }
        }
    }
}