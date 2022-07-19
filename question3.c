#include<stdio.h>
int main()
{
    int a,b=0,i;
    printf("enter a odd number");
    scanf("%d",&a);
    for(i=1;i<=a;i+=2)
    {
        b=b+i;
    }
    printf("sum of first %d odd number is %d",a,b);
}