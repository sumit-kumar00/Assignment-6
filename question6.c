#include<stdio.h>
int main()
{
    int i,fact=1,number;
    printf("enter a number whose factorial you want to findout");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
        fact=fact*i;
    printf("factorial of %d is %d",number,fact);
}