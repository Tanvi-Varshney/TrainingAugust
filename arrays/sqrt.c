#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("enter number: ");
scanf("%d",&n);
int root = round(sqrt(n));
printf("number is: %d",root*root);
return 0;
}

