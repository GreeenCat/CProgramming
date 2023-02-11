#include<stdio.h>
int main(){

int a,b,temp;


printf("Enter the value of a \n");
scanf("%d",&a);

printf("Enter the value of b \n");
scanf("%d",&b);


printf("The value of a : %d and valude of b : %d\n",a,b);

printf("Swapping................................................................");


temp=a;
a=b;
b=temp;


printf("The numbers are swapped\n");
printf("Now the valude of a : %d and b : %d",a,b);



return 0;
}