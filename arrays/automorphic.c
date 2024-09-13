#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter: ");
scanf("%d",&n);
int digit=0;
int x=n;
while(n>0){
n%10;
digit++;
n=n/10;
}
int square=x*x;
int p= pow(10,digit);
int d=square%p;
if(d==x)
printf("atumorphic  ");
else
printf("not  ");
return 0;
}
