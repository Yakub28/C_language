#include <stdio.h>
#include <stdlib.h>

struct Sponsor{
   char name[50];
   float donat;
};

int main()
{
    int n;
    printf("insert the number of sponsors: ");
    scanf("%d", &n);
    struct Sponsor *sponsors;    
    sponsors=(struct Sponsor*)malloc(n*sizeof(struct Sponsor));
    for(int i=0; i<n;i++){
        printf("Insert the name of the sponsor #%d ", i+1);
        scanf("%s", sponsors[i].name);
        printf("Insert the sum donated by #%d ", i+1);
        scanf("%f", &sponsors[i].donat);
    }
    printf("Our great sponsors:\n");
    for(int i=0;i<n;i++){
        if(sponsors[i].donat>10000){
            printf("*%s\t(%.2f$)\n", sponsors[i].name, sponsors[i].donat);
        }
    }
    printf("Our sponsors:\n");
    for(int i=0; i<n; i++){
        if(sponsors[i].donat<10000){
            printf("*%s\t(%.2f$)", sponsors[i].name, sponsors[i].donat);
        }
    }
    
    free(sponsors);
    return 0;
}
