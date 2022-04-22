#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
   printf("insert the number of patients ");
   scanf("%d",&num);
   float *weight=(float*)malloc(num*sizeof(float));
   float max,min, mean;
   float sum=0;
   for(int i=1;i<=num; i++){
       printf("insert the weight of a patients n%d ", i);
       scanf("%f", &weight[i]);
       sum+=weight[i];
   }
   mean=sum/num;
   max=min=weight[0];
   for(int i=1;i<=num;i++){
        if(weight[i]>max){
            max=weight[i];
        }
        if(weight[i]<min){
            min=weight[i];
        }
   }
    free(weight);
    printf("Maximum of all weights:%.2f\n", max );
    printf("Minimum of all weights:%.2f\n", min );
    printf("Mean of all weights:%.2f\n", mean );
   
    return 0;
}
