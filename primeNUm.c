#include <stdio.h>

int main()
{
    int n;
    printf("input the number: ");
    scanf("%d", &n);
    int counter=0;
    for(int i=1; i<n; i++){
        if(n%i==0)
        counter+=1;
    }
    if(counter==1)
    printf("The number %d is a prime number!", n);
    else 
    printf("The number %d is a composite number!", n);
    
    return 0;
}
