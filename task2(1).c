#include <stdio.h>

int main()
{
    int a, b, c, x;
    printf("Input the coefficiency: ");
    scanf("%d%d%d", &a,&b,&c);
    if(a==0){
        if(b==0){
            printf("one solution");
            x=-c/b;
            printf("%d", x);
        }
    else
    {
        if(b==0 && c==0)
        printf("no solutions");
        else
        printf("infinitely many");
    }
    }
    return 0;
}
