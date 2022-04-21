#include <stdio.h>

int main()
{
    int N;
    printf("input the number: ");
    scanf("%d", &N);
    
   int i=2;
   printf("Factor of the number %d: ", N);
   while(N>1){
        while(N%i==0){
        printf("%i ",i);
        N=N/i;
        }i++;}

    return 0;
}
