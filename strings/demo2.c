#include<stdio.h>
#include<string.h>
#define MAX 8
int main(){
char ch[MAX];
printf("enter your string: ");;
fgets(ch,MAX,stdin);
int len=strlen(ch);if(ch[len-1]=='\n')
ch[len-1]='\0';
fputs(ch,stdout);
return 0;
}
