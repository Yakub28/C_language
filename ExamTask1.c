#include <stdio.h>
#include <stdlib.h>
void read(char *str, int n){
    printf("Insert the string of the length n\n");
    scanf("%s",str);
}
void print_squares(int n){
    printf("we have the squares\n");
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
        printf("X");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Insert the size: ");
    scanf("%d",&n);
    char *arr=(char*)malloc(n*sizeof(char));
    read(arr,n);
    int counter=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>=97 && arr[i]<=122)
            counter++; 
    }
    
    
    
    print_squares(counter);
    free(arr);
    return 0;
}
