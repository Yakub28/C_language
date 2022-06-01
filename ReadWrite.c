#include <stdio.h>

int main()
{
    //  char text[100];
    //  char name[50];
    //  printf("Input the name of the file: ");
    //  scanf("%s",name);
    //  int lin;
    //  printf("Input the number of lines to insert: ");
    //  scanf("%d",&lin);
    //  FILE *fp;
    //  fp=fopen(name,"w");
    //  printf("Enter the sentences:\n");
    //  for(int i=0; i<lin;i++){
    //      scanf("%s",text);
    //      fprintf(fp,"%s\n",text);
    //  }
    //  fclose(fp);
    
    
    char name[80];
    printf("Input the name: ");
    scanf("%s",name);
    
    FILE *fp;
    fp=fopen(name,"r");
    
    if(fp==NULL)
    printf("File does not exist.");
    else{
        char c;
        while((c=fgetc(fp))!=EOF){
            if(c==' '|| c=='\n')
            printf("\n");
            else{
                printf("%c",c);
            }
        }
    }
    fclose(fp);
    return 0;
}
