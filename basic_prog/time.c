#include<stdio.h>
#define hour 60
int main(){
int time;
printf("Enter time: ");
scanf("%d",&time);
int hours=time/hour;
int min=time%hour;
printf("time is %d hours and %d minutes ",hours,min);
return 0;
}
