#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int m;
scanf("%d",&m);
int arr2[m];
for(int i=0;i<m;i++){
scanf("%d",&arr2[i]);
}
int size=n+m;
int new[size];
for(int i=0;i<n;i++){
new[i]=arr[i];
}
int j=0;
for(int i=n;i<size;i++){
new[i]=arr2[j];
j++;
}


for(int i=0;i<size;i++){
printf("%d ",new[i]);
}
return 0;
}
