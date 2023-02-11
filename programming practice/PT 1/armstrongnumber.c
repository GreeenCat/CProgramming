#include<stdio.h>
void main(){
    int n,r,cube=1,sum=0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp = n;
    
    while(n>0){
        r = n%10;
        cube = r*r*r;
        sum = sum+cube;
        n = n/10;
        
    }
    
    
    if(temp==sum){
        printf("It is armstrong number");
    }
    else{
        printf("It is not an armstrong number");
    }
}