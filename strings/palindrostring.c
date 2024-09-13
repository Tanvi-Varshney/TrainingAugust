
#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    scanf("%s",str);
    
    int n=strlen(str);
    int s=0,e=n-1,loc=1;
    while(s<=e){
    if(str[s]!=str[e]){
        loc=0;
        break;
    }
    s++;
    e--;
    }
    if(loc==0)
        printf("not a Palindrome");
        else
        printf("palindrome");
        
    return 0;
}

