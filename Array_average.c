#include <stdio.h>

int main()
{
  const int n=5;
  int sum=0;
  int arr[n];
  int max=0;
  for(int i=0; i<n; i++){
      printf("Element #%d value\n", i+1);
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
      if(arr[i]>max)
      max=arr[i];
  }
   int counter=0;
   for(int i=0;i<n;i++)
    { 
      if(arr[i]!=max)
      counter++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max)
        sum+=arr[i];
    }
    double average=sum/counter;
    printf("Number of int different than %d:%d\n", max,counter);
    printf("Sum:%d\n", sum);
    printf("average: %f\n", average);
    
    return 0;
}
