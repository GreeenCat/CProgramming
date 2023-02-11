#include<stdio.h>
int main(){
 int n,i,r,temp,sum=0;

 printf("Enter a number");
 scanf("%d",&n);
temp = n;
 while (n>0)
 {
    r = n%10;
sum = sum*10+r;
n = n/10;
 }

 if (temp==sum)
 {
    printf("It is a pallendrome number");
 }
 else{
     printf("It is not a pallendrome number");
 }
 
 

return 0;
}