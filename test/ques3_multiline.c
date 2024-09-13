#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 200

int main()
{
	int n;
	int sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);

	char *str[n];
	for(int i=0; i<n; i++) {
		str[i]=(char*)malloc(max*sizeof(char));
	}
	printf("Enter n lines: \n");

	for(int i=0; i<n; i++) {
		scanf(" %[^\n]s ",str[i]);
	}

	char ch;
	printf("Enter character to find: ");
	scanf(" %c",&ch);

	int index;
	for(int i=0; i<n; i++) {
		int len=strlen(str[i]);
		for(int j=0; j<len; j++) {
			if(str[i][j]==ch) {
				printf("character found at position: (%d,%d)\n",i,j);
				sum=sum+j;
				break;
			}
		}
	}

	char string[max];
	printf("Enter string to find: ");
	scanf(" %s",string);
for(int i=0;i<n;i++){
	char *p =strstr(str[i],string);
	if(p!=NULL){
	    int x=p-str[i];
	    printf("string found at position:(%d,%ld)\n",i,p-str[i]);
	    sum=sum+x;
	    break;
	}

}

	printf("sum of positions is: %d\n",sum);

	return 0;
}
