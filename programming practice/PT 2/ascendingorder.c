//sorting in ascending order

#include<stdio.h>
void main(){
    int i,j,n,temp;
    
    printf("How how many number you want to enter");
    scanf("%d",&n);
    
    int myarray[n];
    printf("Enter number\n");
    for(i=0;i<n;i++){
    scanf("%d",&myarray[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(myarray[i]>myarray[j]){
                temp=myarray[i];
                myarray[i]=myarray[j];
                myarray[j]=temp;
            }
        }
    }
    
    printf("\n");
    printf("\n");printf("\n");printf("\n");printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n",myarray[i]);
    }
    
}