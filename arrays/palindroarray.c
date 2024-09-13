#include <stdio.h>

int main()
{
    int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int s=a[0];
int e=a[n-1];
while(s<=e){
    if(a[s]==a[e]){
        s++;
        e--;
    }
    else{
    break;
    }
}
if(s>e){
    printf("Palindrome array");

}
else{
    printf("Not palindrome");
}
    return 0;
}
