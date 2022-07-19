#include<stdio.h>
int main()
{
    int a,b=0,i;
    printf("enter any number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b+i*i*i;
    }
    printf("sum of first  %d cubes is %d",a,b);
}