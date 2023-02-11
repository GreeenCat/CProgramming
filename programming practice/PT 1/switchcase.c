#include<stdio.h>

void main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("You presses 1");
        break;
        case 2:
        printf("You presses 2");
        break;
        case 3:
        printf("You presses 3");
        break;
        case 4:
        printf("You presses 4");
        break;
        case 5:
        printf("You presses 5");
        break;
        case 6:
        printf("You presses 6");
break;
    default:
    printf("Wrong input");
    }

}