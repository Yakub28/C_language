#include <stdio.h>
#include <stdlib.h>

struct patient{
    char first_name[50];
    char last_name[50];
    float temper;
};

void read(struct patient *pt,int n){
    for(int i=0;i<n;i++){
        printf("Enter the first_name: ");
        scanf("%s",pt[i].first_name);
        printf("Enter the last name: ");
        scanf("%s", pt[i].last_name);
        printf("Enter the temperature ");
        scanf("%f",&pt[i].temper);
    }
}
void write(struct patient *pt, int n){
    for(int i=0;i<n;i++){
        printf("patient #%d\n", i+1);
        printf("%s\n", pt[i].first_name);
        printf("%s\n", pt[i].last_name);
        printf("%f\n",pt[i].temper);
        printf("-----------------------\n");
    }
}

struct patient* search(struct patient *pt1,struct patient *pt2, int n1, int n2, float temp,int *n3){
    int count=0;
    for(int i=0;n1>i; i++){
        if(pt1[i].temper>=temp){
            count++;
        }
    }
    for(int i=0;n2>i;i++){
        if(pt2[i].temper>=temp){
            count++;
        }
    }
    *n3=count;
    struct patient *w;
    w=(struct patient*)malloc(count*sizeof(struct patient));
    count=0;
    for(int i=0;n1>i;i++){
        if(pt1[i].temper>=temp){
            w[count]=pt1[i];
            count++;
        }
    }
    for(int i=0;n1>i;i++){
        if(pt2[i].temper>=temp){
            w[count]=pt2[i];
            count++;
        }
    }
    return w;
}
int main()
{
    int n1;
    printf("Insert the size of the first list: ");
    scanf("%d", &n1);
    int n2;
    printf("Insert the size of the second list: ");
    scanf("%d",&n2);
    float temp;
    int *n3;
    printf("Input the minimum temp: ");
    scanf("%f",&temp);
    struct patient *pt1;
    pt1=(struct patient*)malloc(n1*sizeof(struct patient));
    struct patient *pt2;
    pt2=(struct patient*)malloc(n2*sizeof(struct patient));
    printf("Enter the patience first list:\n");
    read(pt1, n1);
    printf("enter the patience of the second list:\n");
    read(pt2, n2);
    printf("The first list:\n");
    write(pt1,n1);
    printf("The second list:\n");
    write(pt2,n2);
    
    struct patient *ptr;
    ptr=search(pt1, pt2,n1, n2,temp,&n3);
    printf("The following  list has exceed the temperature %f:\n",temp);
    write(ptr,n3);
    free(pt1);
    free(pt2);
    free(ptr);
    return 0;
}
