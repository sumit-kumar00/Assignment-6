#include<stdio.h>
int main()
{
    int a,b=0,i;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b+i;
        
    }
    printf("\nsum of first %d number is %d",a,b);
}