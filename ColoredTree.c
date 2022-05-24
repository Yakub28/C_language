#include<stdio.h>
#include<stdlib.h>

char colors[7][20] = {"\033[0;31m","\033[0;32m","\033[0;33m","\033[0;34m","\033[0;35m","\033[0;36m","\033[0;37m"};

char tree[17][50] =
{
    "\t\t      *    ","\t\t    * * *    ","\t\t      *    "," ", "\t\t      *    ", "\t\t     ***   ",
    "\t\t    *****  ", "\t\t     ***    ", "\t\t    *****   ", "\t\t   *******  ", "\t\t  ********* ",
    "\t\t    *****    ", "\t\t   *******   ", "\t\t  *********  ", "\t\t *********** ", "\t\t*************",
    "\t\t      **", "\t\t      **"
};

void changeOfColor(int i)
{
    puts(colors[i]);
}

void white()
{
  printf("\033[0m");
}

int main()
{
    int i,j;
    int k = 0;
    system("color");

    puts("\n\n\n\n");
    for(int i = 0; i < 18; i++)
        {
            changeOfColor(k%7);
            printf("%s", tree[i]);
            k++;
        }
    puts("\n\n\n");
    white();
return 0;
}