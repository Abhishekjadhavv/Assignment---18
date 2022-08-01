// Write a function to compare two strings.

#include <stdio.h>
#include<string.h>
int str_cmp(char str[], char str1[]);
int main()
{
    char str[20] = "abhishek";
    char str1[20] = "abhishek";
    printf("%d",str_cmp(str1, str));
    return 0;
}

int str_cmp(char str[], char str1[])
{ 
    int str_len = strlen(str)-1;
    int str1_len = strlen(str1)-1;

    int min_len = str_len<str1_len?str_len:str1_len;

    for(int i = 0;i<=min_len-1;i++){
        if(str[i]==str1[i]){
            continue;
        }else if(str[i]>str1[i]){
            return 1;
        }else{
            return -1;
        }
    }
  return 0;
}