#include <stdio.h>
#include <stdlib.h>

void read(int arr[], int n){
    for(int i=0; i<n; i++)
    arr[i]=(rand()%100);
}
void print(int arr[],int n){
    for(int i=0;i<n ;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int n){
    int temp=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n;j++){
            if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(int i=0;i<n ;i++){
        printf("%d\t",arr[i]);
    }
}
void median(int arr[],int n){
    float med;
    if(n%2==0){
     med=arr[(n)/2]+arr[n/2+1];
     med=med/2;
    }
    else{
        med=arr[(n+1)/2];
    }
    printf("\nMedian: %f",med);
}

int main()
{
    int n;
    printf("Input the size: ");
    scanf("%d", &n);
    int* arr=(int*)malloc(n*sizeof(int));
    
    read(arr,n);
    print(arr,n);
    sort(arr,n);
    median(arr,n);
    free(arr);

    return 0;
}
