#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int max=a[0];
int second=-1;
for(int i=0;i<n;i++){
    if(max<a[i]){
        second=max;
    max=a[i];
    
}
    }
printf("%d",second);

    return 0;
}
