#include <stdio.h>
#include<string.h>

int main() {
    char input[10000];
    scanf("%s", input);

    int length = strlen(input);
    int fre[26]={0};
    for(int i= 0; i<length; i++)
    {
        int val = input[i]-'a';
        fre[val]++;
    }

    for(int i=0; i<26; i++)
    {
        if(fre[i]>=1)
        {
           printf("%c - %d\n",i+'a',fre[i]);
        }
    }


    return 0;
}