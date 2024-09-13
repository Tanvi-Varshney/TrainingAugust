  #include<stdio.h>
  #include<stdlib.h>
  int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  int sum=0,average;
  for(int i=0;i<n;i++){
  sum=sum+arr[i];
  }
  average=sum/n;
  printf("sum=%d  avg=%d  ",sum,average);
  return 0;
  }

