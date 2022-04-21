#include <stdio.h>

int main()
{ 
    float first, second;
    printf("Input two real numbers: ");
    scanf("%f", &first);
    scanf("%f", &second);
    printf("Choose an action \n 1 addition \n 2 subtraction \n 3 multiplication \n 4 division \n 0 exit the programm");
    
    int nr;
    printf("\n\n\tSelect the number of action: \t");
    scanf("%d", &nr);
    switch(nr){
        case 1:
        printf("%f*%f=%f", first, second, first+second);
        break;
        case 2:
        printf("%f-%f=%f", first, second, first-second);
        break;
        case 3:
        printf("%f*%f=%f", first, second, first*second);
        break;
        case 4:
        printf("%f/%f=%f", first, second, first/second);
        break;
        case 0:
        break;
    default:
    printf("There is no such a number!");
    }

    return 0;
}
