#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char *C=(char*)malloc(n*sizeof(char));
    scanf("%s", C);
    for(int i=0;i<strlen(C)-1; i++){
        int temp;
        for(int j=i+1; j<strlen(C);j++){
            if(C[i]>C[j]){
                temp=C[i];
                C[i]=C[j];
                C[j]=temp;
            }
        }}
        printf("after sort :%s",C);
        // printf("sorting is done ");
        // for (int i = 0; i < n; i++)
        // printf("%c\n", C[i]);
        // }
    
    
    
    
        free(C);
    return 0;
}
