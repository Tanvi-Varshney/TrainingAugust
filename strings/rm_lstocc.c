#include<stdio.h>
#include<string.h>
 #define max 100;
int main()
{
   char s1[] = "This is a string remove last occurance of word from string";
   char s2[] = "word";
   char *temp;            //pointer for storing the address of substring,s2 if found in s1
   char *lst = NULL;     //for storing the address of last occurance of substring
  
   temp = strstr(s1,s2);      //check for substring, if found address will be stored in p
 
   while(temp != NULL)         //loop to find the last occurance
   {
       lst = temp;             //lst will get the address of word
       temp = strstr(temp + 1,s2);     //temp updated to next occurance of word
   }
  
   if(lst != NULL)
       printf("\nWord : %s\nfound at %ld\nOriginal String: %s\n",s2,lst - s1,s1);
   
   long int pos=lst-s1;
   
   int len=strlen(s1);
   int len2=strlen(s2);
   int x=pos+len2;
   char s3[len-len2];
   int j=0;
   for(int i=0;i<len;i++){
       if(i<pos||i>x){
           s3[j]=s1[i];
           j++;
       }
   }
   
  
   printf("removed string is: ");
   fputs(s3,stdout);
 
   return 0;
}
