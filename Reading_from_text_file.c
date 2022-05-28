#include <stdio.h>

int main()
{  
    printf("Enter the name of the file ");
    char name[20];
    scanf("%s", name);
    
    FILE *fp;
    fp=fopen(name,"r");
    if(fp==NULL){
        printf("file does not exist!");
    }
    else{
        int i=0;
        char c;
        while((c=fgetc(fp))!=EOF){
            if(c==' '||c=='\n'){
                printf("\n");
            
            }
            else{
                printf("%c",c);
            }
        }
    }
    fclose(fp);
    
    return 0;
}
