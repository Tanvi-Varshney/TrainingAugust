#include<stdio.h>
#include<string.h>
 
void duplicate(char *str) {
	char str2[20];
	int len = strlen(str);
	int temp=0;
	while(temp==0) {
 
		int j=0;
		for(int i=1; i<len; i++) {
			// If the current character is not the same as the last character in the result
 
			if(str[i-1]!=str[i]) {
				str2[j]=str[i-1];
				j++;
			}
			else {
				for(int k=i+1; k<len; k++) {
					str2[j]=str[k];
					j++;
				}
				break;
			}
		}
 
		int n=strlen(str2);
		int count=0;
		for(int k=1; k<n; k++) {
			if(str2[k-1]==str2[k]) {
				count=1;
				temp=0;
				str[0] = '\0';
			}
			strcpy(str,str2);
		}
		if(count==0) {
			temp=1;
		}
 
	}
	printf("%s",str2);
 
}
int main() {
	char str[20];
	scanf("%s",str);
	duplicate(str);
	return 0;
}
