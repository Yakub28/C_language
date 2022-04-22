#include <stdio.h>
#include <string.h>


void palindrome(char word[]){
    int i=0;
    int l=strlen(word)-1;
    while((word[l-i]==word[i])&&i<l){i++;
    }
    if(l==i)
    printf("entered word: %s is a palindrome ", word);
    else
    printf("it is not a palindrome");
}
int main()
{
    char word[50];
    printf("Insert a word\t");
    scanf("%s", word);
    
    palindrome(word);
    return 0;
}
