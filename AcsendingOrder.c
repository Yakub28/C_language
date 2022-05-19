#include <stdio.h>

int main()
{
    int n;
    int acsend=0;
    printf("input the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Input the #%d element ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])
        acsend=0;
        else
        acsend++;
    }    
    if(acsend==0)
    printf("The values are in acsending order");
    else
    printf("the values are in descending order");
   
    return 0;
}
