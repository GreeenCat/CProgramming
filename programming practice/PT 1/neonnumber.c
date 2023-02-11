#include<stdio.h>

void main(){
    
    int n,square,i,sum=0,r,temp;
    printf("Enter a number to check if it is neon number or not\n");
    scanf("%d",&n);
    
    square = n*n;
    while(square>0){
        r = square%10;
        sum = sum+r;
        square = square/10;
        
        
    }

    if(sum==n){
        printf("It is a neon number\n");
    }
    else{
        printf("    It is not a neon number");
    }
    
    
    
    
}