#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    
    int *L=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n-1;i++){
        printf("Insert L[%d]: ", i);
        scanf("%d",&L[i]);
    }
    
    printf("The list is: ");
    for ( int i = 0; i < n; i++ )
    {
        printf(" %d ", *(L+i) );
    }
    int search;
    printf("Input the number to search: ");
    scanf("%d", &search);
    for(int i=0; i<n; i++){
        if(search==L[i])
         printf("The number %d is located on the position %d", search,i);
    }
    free(L);

    return 0;
}
