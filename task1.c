
#include <stdio.h>

int main()
{
    //multiplication table
    
    for(int i=0; i<10; i++){
        printf("\t");
        for(int j=0; j<10;++j){
            int temp=(i+1)*(j+1);
            printf("%d\t",temp);
        }
        printf("\n");
    }
    return 0;
}
