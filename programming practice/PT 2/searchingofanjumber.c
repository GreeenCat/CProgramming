// searching of number in an std::array<, N> ;

#include<stdio.h>
void main(){
    int n,i,searching;
    printf("How many number you want??????\n");
    scanf("%d",&n);
    
    int array[n];
    
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    printf("Enter you want to search\n");
    scanf("%d",&searching);
    
    for(i=0;i<n;i++){
        if(searching==array[i]){
            printf("The number %d is found at position %d\n",searching,i+1);
        }
    }
    
    
    
}