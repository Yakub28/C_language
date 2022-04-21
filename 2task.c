#include <stdio.h>

int main()
{
    int age;
    char name[50];
   printf("Input your age: ");
   scanf("%d", &age);
   printf("Input your name: ");
   scanf("%s", name);
   printf("Your name is %s and you are %d years old", name,age);
 
    return 0;
}
