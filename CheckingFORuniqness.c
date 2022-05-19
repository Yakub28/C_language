#include <stdio.h>

int main()
{
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Input the element #%d ", i+1);
        scanf("%d", &arr[i]);
    }
    int rep=0;
    int unique=0;
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            unique++;
            rep=arr[i];}
            else{
            unique=0;
        }}
    }
    if(unique=0)
    printf("array consist of the unique values ");
    else
    printf("repeated value %d", rep);
    return 0;
}
