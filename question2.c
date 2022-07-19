#include<stdio.h>
int main()
{
    int a,c=0,i;
    printf("enter a even number");
    scanf("%d",&a);
    for(i=2;i<=a;i+=2)
    {
        c=c+i;
    }
    printf("sum of first %d even number is %d",a,c);
}