#include <stdio.h>

int main()
{
    // char name[100];
    // puts("Enter a name of the file: ");
    // scanf("%s", name);
    
    // FILE *fb=fopen(name,"wb");
    
    // for(int i=0;i<10;i++){
    //     fwrite(&i,sizeof(char),1,fb);
    //     printf("\n");
    // }
    // fclose(fb);
    
    
    char name[100];
    
    puts("Enter a name of the file: ");
    scanf("%s",name);
    
    FILE *fb=fopen(name,"rb");
    for(int i=0;i<20;i++){
        fread(&i, sizeof(char),1,fb);
        printf("%d\n",i);
    }
    fclose(fb);
    
    return 0;
}
