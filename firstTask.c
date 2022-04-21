#include <stdio.h>

int main()
{
   int a,b,c,d,e,f;
   int x,y;
   int D, Dx, Dy;
   printf("Input the systems coefficiency: ");
   scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
    D=a*e-d*b;
    Dx=c*e-f*b;
    Dy=a*f-d*c;
    if(D==0){
        if(Dx==0 && Dy==0)
        printf("infinitely many solutions");
        else
        printf("System has no solutions");
    }
    else
      {
        x=Dx/D;
        y=Dy/D;
        printf("System has exactly one solution x=%d and y=%d", x, y);
      }
    
    return 0;
}
