#include<stdio.h>
void main(){
    
    int n,r,sum=0,temp;
    
    
    printf("Enter a number\n");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("The addition of %d is %d",temp,sum);
}