#include<stdio.h>
int main(){
float w,h;
printf("enter weight and height: ");
scanf("%f%f",&w,&h);
printf("bmi=%.2f",w/(h*h));
return 0;
}
