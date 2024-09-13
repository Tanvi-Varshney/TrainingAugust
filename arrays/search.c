#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter keyvto search ");
int k;
scanf("%d",&k);
for(int i=0;i<n;i++){
if(arr[i]==k){
printf("find at %d index   ",i);
break;
}
}
return 0;
}
