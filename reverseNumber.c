#include<stdio.h>

int reverse( int n );

int main()
{
   
    int n;
    printf("Enter any number: ");
    scanf("%d", &n );

    printf("After reverse the no is : %d", reverse( n ) );
    return 0;
}

int sum = 0, r;

int reverse( int n )
{
   if( n != 0 )
   {
      r=n%10;
      sum=sum*10+r;
      reverse( n/10 );
   }
   else
      return sum;
   return sum;
}