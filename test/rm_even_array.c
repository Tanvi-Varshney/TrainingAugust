#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr1[n];
    printf("enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
      printf("Enter value of m: ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
   int new=n+m;
   int merge[new];
   int temp,j=0;
   for(int i=0;i<n;i++){
       merge[j]=arr1[i];
       j++;
   }
   for(int i=0;i<m;i++){
       merge[j]=arr2[i];
       j++;
   }
   int new_arr[new];
   int k=0;
   for(int i=0;i<new;i++){
       if(merge[i]%2!=0){
           new_arr[k]=merge[i];
           k++;
       }
   }
   k--;
   for(int i=0;i<k-1;i++){
       for(int j=i+1;j<k;j++){
           if(new_arr[i]>new_arr[j]){
               temp=new_arr[i];
               new_arr[i]=new_arr[j];
               new_arr[j]=temp;
           }
       }
   }
   printf("Final array is: ");
   for(int i=0;i<k;i++){
       printf("%d ",new_arr[i]);
   }
    return 0;
}

