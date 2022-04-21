#include <stdio.h>

int main()
{
    int pin=123456;
    int n;
    int count=3;
    printf("please enter your pin: ");
    while(count>0){
    scanf("%d", &n);
    if(n==123456){
    printf("Welcome! You may withdraw the money");
    break;
    }
    else{
        --count;
        printf("Wrong pin num. You have %d tries left", count);
    }}

    return 0;
}
