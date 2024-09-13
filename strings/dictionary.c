#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    int n;
    printf("Enter no. of rows: \n");
    scanf("%d", &n);
    char str[n][MAX];
    char temp[MAX];
    printf("Enter words: \n");
    for(int i=0;i<n;i++){
        scanf("%s", str[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1 ; j<n ;j++){
            if(strcmp(str[i],str[j]) > 0){
                strcpy(temp, str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Sorted order: \n");
    for(int i=0;i<n;i++){
        fputs(str[i],stdout);
        printf("\n");
    }
    return 0;
}
