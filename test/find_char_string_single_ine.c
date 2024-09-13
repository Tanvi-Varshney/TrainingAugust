#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter array elements: ");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    
      int total=(n*(n+1))/2;
      int sum=0;
      for(int i=0;i<n-1;i++){
          sum+=arr[i];
      }
      
      int miss_num=total-sum;
      printf("Missing number is: %d",miss_num);
      
    return 0;
}

