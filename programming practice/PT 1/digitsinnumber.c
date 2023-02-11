#include<stdio.h>
void main(){
    int n,i,count=0,r;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    
    while(n>0){
        
        n = n/10;
        count++;
    }
    printf("%d",count);
    
    
}