#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    char str2[MAX];
    scanf("%s%s",str,str2);
    
    int n=strlen(str);
    int loc=0, count=1;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=0;j<n;j++){
         if(str[i]==str2[j]){
             count=0;
         }
        }
         if(count!=0){
             printf("not anagram\n");
             loc++;
             break;
        }
        }
        if(loc==0)
        printf("Anagram");
        
    return 0;
}
