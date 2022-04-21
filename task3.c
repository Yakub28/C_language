#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c;
   float ha,hb,hc;
   int choice;
   float A, p;
   printf("Input the coefficiency: ");
   scanf("%f%f%f", &a,&b,&c);
   if((a+b>c) && (b+c>a) &&(c+a>b)){
       printf("The trianle exist\n");
        printf("0.Exit the program\n 1. Check if the triangle is rectangular \n2. Check if the triangle is equilateral \n3. Calculate the area of this triangle \n4. Calculate the lengths of the three heights of this triangle\n");
    
    scanf("%d", &choice);
    switch(choice){
        case 1:
        if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b)){
            printf("The triangle is rectangular");
        }
        break;
        case 2:
        if((a=b)&&(b=c)){
            printf("The triangle is equilateral");
        }
        break;
        case 3:
        p = (a + b + c)/2;
        A = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Area of a rectangle=%f",A);
        break;
        case 4:
        p = (a + b + c)/2;
        A = sqrt(p*(p-a)*(p-b)*(p-c));
        ha=(2*A)/a;
        hb=(2*A)/b;
        hc=(2*A)/c;
        printf("First height=%f, second height=%f, third height=%f",ha, hb, hc);
    }
   }
   else
   printf("The triangle does not exist\n");
  
    
    return 0;
}
