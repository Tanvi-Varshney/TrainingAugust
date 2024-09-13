
#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    scanf(" %[^\n]s ",str);
    
    int n=strlen(str);
    char str2[MAX]="";
    int k=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            str2[k]=str[i];
            k++;
            continue;
        }
        int count=0;
        for(int j=i+1;j<n;j++){
         if(str[i]==str[j]){
             count++;
         }
        }
        if(count==0){
            str2[k]=str[i];
            k++;
        }
        }
        
    
    printf("new string: ");
    fputs(str2,stdout);
    
    

    return 0;
}

