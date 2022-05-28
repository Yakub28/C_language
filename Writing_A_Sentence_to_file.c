#include <stdio.h>

int main()
{  
    int i, num;
    char str[70]; 
    char file_name[25];
    printf("Enter a name of the file:\n");
    gets(file_name);
    
    FILE *fp;
    fp=fopen(file_name,"w");
    
    printf("Enter the number of  sentences to insert:\n");
    scanf("%d",&num);
    
    printf("Enter the sentences\n");
    
    for(i=0;i<num+1;i++){
        gets(str);
        fputs(str, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    
    return 0;
}
