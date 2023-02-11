#include<stdio.h>
int main(){

int number,i,tobestored=1;
printf("Enter a number\n");
scanf("%d",&number);


for (i=1;i<=number;i++)
{
 tobestored = tobestored*i;
}
printf("%d",tobestored);

return 0;
}