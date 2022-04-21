#include <stdio.h>

int main()
{
    int N;
    printf("input the number: ");
    scanf("%d", &N);
    
    printf("The Collatz sequence: ");
    while(N!=1){
        if(N%2==0){
            N=N/2;
            printf("\t%d",N);
        }
        else{
            N=3*N+1;
            printf("\t%d",N);
    }}
    printf("\n\n");
    return 0;
}
