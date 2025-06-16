#include <stdio.h>
#include <string.h>

int main() {
    char str1[101];
    char str2[101];
    scanf("%s %s", str1,str2);

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    int arr1[26]={0},arr2[26]={0};

    for(int i=0; i<length1; i++)
    {
        int index = str1[i] - 'a';
        arr1[index]++; 
    }

    for(int i=0; i<length2; i++)
    {
        int index = str2[i] - 'a';
        arr2[index]++; 
    }

    int same = 1;
    for(int i = 0 ; i<26; i++)
    {
        if(arr1[i] != arr2[i])
        {
            same = 0;
            break;
        }
    }

    if(same)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}