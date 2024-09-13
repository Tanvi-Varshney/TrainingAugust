#include<stdio.h>

#define MAX 50
int main(){
char ch[MAX];
printf("Enter string : ");
scanf("%[^\n]s",ch);
printf("string is: %s   ",ch);
return 0;
}
