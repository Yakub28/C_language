#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n;
     scanf("%d",&n);
     int* L=(int*)malloc(n*sizeof(int));
     for(int i=0; i<n;i++){
         printf("Input %d numbers: ", i+1);
         scanf("%d",&L[i]);
     }
     printf("Array before sorting: ");
     for(int i=0; i<n; i++){
         printf("%d ",L[i]);
     }
     printf("\nArray after sorting: ");
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(L[j]>L[j+1]){
                int temp=L[j];
                L[j]=L[j+1];
                L[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
printf("%d\n", L[i]);
    
free(L);
    return 0;
}
