
#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    printf("Input string: ");
    scanf(" %[^\n]s ",str);
    printf("Input character to replace: ");
    char ch;
    scanf(" %c",&ch);
    int index;
int n= strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            index=i;
            break;
        }
    }
    printf("Input character to replace with: ");
    char p;
    scanf(" %c",&p);
    str[index]=p;
    printf("new replaced string is: ");
        fputs(str,stdout);
    return 0;
}

