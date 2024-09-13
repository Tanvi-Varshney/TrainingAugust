#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    scanf("%s ",str);
    
    int n=strlen(str);
    int s=0;
    int e=n-1;
    char temp;
    while(s<=e){
        temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
    
    printf("reverse string is: ");
    fputs(str,stdout);
    
    

    return 0;
}

