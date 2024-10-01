#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
 
int main() 
{
    // Write C code here
    char str[MAX];
    char str2[MAX];
    int x=0;
    printf("Enter the string\n");
    scanf("%s",&str);
    int len=strlen(str);
    for(int i=0;i<len;i=i+2)
    {
     str2[x++]=str[i];
     printf("%c",str[i]);
    }
    printf(" \n");
    printf("%s",str2);

 
    return 0;
}
