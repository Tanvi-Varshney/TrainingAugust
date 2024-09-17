#include <stdio.h>
#include <string.h>
#define max 20

int main()
{
      char str[max];
      printf("enter the string:");
      scanf("%s",str);
      int score=0,count=0;
      int len=strlen(str);
      
     int s=0,e=len-1;
     while(s<=e){
      if(str[s]!=str[e])   {
          count=1;
      }
      s++;
      e--;
     }
     if(count==0){
         if(len%4==0){
         int n=len/4;
         score=score+(5*n);
         }
         if(len%5==0){
             int n=len/5;
         score=score+(10*n);
     }
     printf("the score is %d\n",score);
     }
     else
     printf("the score is 0\n");
    return 0;
}
