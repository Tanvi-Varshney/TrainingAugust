#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter: ");
scanf("%d",&n);
int x=n;
int num=n;
int d=0,dig,sum=0;
while(n>0){
d++;
n=n/10;
}
while(x>0){
dig=x%10;
sum=sum+pow(dig,d);
x=x/10;
}
if(num==sum){
printf("Armstrong  ");
}
else{
printf("not  ");
}
return 0;
}
