#include<stdio.h>
int main(){

int n,i,temp,fact,r,sum=0;

printf("Enter a number\n");
scanf("%d",&n);

temp=n;

while(n>0){
r = n%10;
fact = 1;
for(i=1;i<=r;i++){
    fact = fact*i;
}

sum = sum + fact;
n = n/10;
}


if(temp==sum){
    printf("The number is strong");
}
else{
    printf("Number is not strong");
}
return 0;
}