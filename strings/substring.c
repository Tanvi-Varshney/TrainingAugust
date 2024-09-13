#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    #include <stdio.h>
scanf(" %[^\n]s ",str);
    char subs[MAX];
    scanf(" %[^\n]s ",subs);
    char *p;
    p=strstr(str,subs);
    
    printf("found at position: %ld",p-str);
    
    

    return 0;
}

