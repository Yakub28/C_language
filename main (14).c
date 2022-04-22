#include <stdio.h>

float fibonacci(int n){
    if(n==0)
    return 0;
    if (n==1)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%f\n", fibonacci(i+1)/fibonacci(i));
    }

    return 0;
}
