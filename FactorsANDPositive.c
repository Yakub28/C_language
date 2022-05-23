#include <stdio.h>
#include <stdbool.h>

void displayFactors(int x){
    for(int i=1;i<x;i++){
        if(x%i==0)
        printf("%d  ", i);
    }
}
bool getInteger(int y){
    if(y>0){
    printf("true!");
    return true;}
    else{
    printf("false!");
    return false;
}}

int main()
{
    int num;
    printf("input the number: ");
    scanf("%d", &num);
    if(num>0){
        printf("The factors: ");
        displayFactors(num);
    }
    
    int integ;
    printf("\nInput the integer: ");
    scanf("%d", &integ);
    getInteger(integ);
    return 0;
}
