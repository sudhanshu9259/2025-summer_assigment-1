#include<stdio.h>
int main()
{
    int num, i,fact=1;
    printf("enter the no");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
       
    }
printf("the factorial is:%d",fact);

return 0;

}