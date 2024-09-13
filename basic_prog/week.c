#include<stdio.h>
#define week 7
int main(){
int day;
printf("enter days: ");
scanf("%d",&day);
int weeks=day/week;
int days=day%week;
printf("%d weeks and %d days ",weeks,days);
return 0;
}
