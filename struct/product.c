#include <stdio.h>
struct Product{
    int id;
    int amount;
};

int main()
{
    int n;
   scanf("%d",&n);
   struct Product p[n];
   
   // for taking input
   
   for(int i=0;i<n;i++){
       scanf("%d-%d",&p[i].id,&p[i].amount);
       }
    
    
 // for sorting in decreasing order   
    
 struct Product temp;
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if(p[i].amount<p[j].amount){
            
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                    
             }
         }
     }

// for removing duplicate products
for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         if(p[i].id==p[j].id){
             if(p[i].amount<p[j].amount){
                 p[i].amount=0;
             }
         }
     }
     }
     
     //print 
     printf("output: \n");
      for(int i=0;i<n;i++){
          if(p[i].amount!=0){
          
          printf("%d - %d\n",p[i].id,p[i].amount);
          }
      }
         return 0;
}



