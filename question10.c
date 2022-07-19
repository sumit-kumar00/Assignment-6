#include<stdio.h>
int main()
{
    int i,m,n=0;
    printf("enter a number");
    scanf("%d",&m);
    while(m!=0)
    {
        i=m%10;
        n=n*10+i;
        n/=10;
    }
    printf("reverse of number is %d",n);
}