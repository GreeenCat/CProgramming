#include<stdio.h>
int main(){

int n,i,counter=0;

printf("Enter a number\n");
scanf("%d",&n);

for(i=1;i<=n;i++){
    if(n%i==0){
        counter++;
    }
}

if(counter==2){
    printf("It is a prime number");
}
else{
    printf("It is not a prime number");
}
return 0;
}