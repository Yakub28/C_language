#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, x1, x2;
  printf ("Input the coefficiency: ");
  scanf ("%f%f%f", &a, &b, &c);

  float D = b * b - 4 * a * c;
 if(D>0){
     printf("We have two distinct roots");
     x1=(-b-sqrt(D))/(2*a);
     x2=(-b+sqrt(D))/(2*a);
     printf("x1=%f\tx2=%f", x1, x2);
 }
 else if(D==0){
     x1=x2=(-b)/(2*a);
 }
 else
 printf("No roots at all");
  return 0;
}
