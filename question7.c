#include<stdio.h>
int main()
{
    int i=0,m;
    printf("enter a number");
    scanf("%d",&m);
    while(m!=0)
    {
        m=m/10;
        i++;
    }
    printf("\n the number of digits in am number is %d",i);
}