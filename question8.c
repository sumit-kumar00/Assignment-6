#include<stdio.h>
int main()
{
    int i,m;
    printf("enter a number");
    scanf("%d",&m);
    for(i=m;i<=m;i++)
    {
        if(m%2==0)
            printf("number u entered is not a prime number");
        else if(m%3==0)
            printf("number you entered is not a prime number");
        else
            printf("numer you entered is a prime number");
    }
    
}