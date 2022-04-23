#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Insert a positive integer: ");
    scanf("%d", &n);
    printf("Insert a positive integer: ");
    scanf("%d",&m);
    //allacating the memory
    int **A=(int **)malloc(n*sizeof(int*));
    for(int i=0; i<n;i++){
    A[i]=(int*)malloc(m*sizeof(int));
    }
    
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            A[i][j]=(1+i)*(1+j);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }
    //freing the memory
    for( int i = 0; i < n; i++ )
        free( A[i] );
    free( A );
 return 0;
}
