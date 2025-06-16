#include <stdio.h>
#include<string.h>

int main() {
    char str1[10000],str2[10000];
    scanf("%s %s", str1,str2);
    int length1,length2,total_length;
    length1 = strlen(str1);
    length2 = strlen(str2);
    total_length = length1 + length2;
    printf("%d %d\n",length1, length2);
    char str3[total_length+1];
    //string 1 copy 
    for(int i=0; i<length1; i++)
    {
        str3[i] = str1[i];

    }
    //for string 2 copy
    for(int i=0 ; i<length2; i++)
    {
        str3[i+length1] = str2[i];
    }
    str3[total_length] = '\0';

    printf("%s\n",str3);


   
    char temp;
    temp = str1[0];
    str1[0]=str2[0];
    str2[0] = temp;

    printf("%s %s\n", str1, str2);
    


return 0;

}