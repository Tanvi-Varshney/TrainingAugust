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
			if ((str[i-1] == 'a' || str[i-1] == 'e' || str[i-1] == 'i' || str[i-1] == 'o' || str[i-1] == 'u') &&
    (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
					for(int k=i+1; k<len; k++) {
					str2[j]=str[k];
					j++;
				}
				break;
			}
			else {
			    str2[j]=str[i-1];
				j++;
			}
		}
		int n=strlen(str2);
		int count=0;
		for(int k=1; k<n; k++) {
			if ((str[k-1] == 'a' || str[k-1] == 'e' || str[k-1] == 'i' || str[k-1] == 'o' || str[k-1] == 'u') &&
    (str[k] == 'a' || str[k] == 'e' || str[k] == 'i' || str[k] == 'o' || str[k] == 'u')) {
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
