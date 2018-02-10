#include <stdio.h>
#include <stdlib.h>

int multiply(int *res,int x, int size)
{
    int carry=0,i;
    int prod;
    for(i=0;i<=size-1;i++)
    {
        prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }

    while(carry)
    {
        res[size++]=carry%10;
        carry/=10;
    }

    return size;
}
int main()
{
    int res[1000];
    int size=1;
    res[0]=1;
    int i;
    for(i=1;i<1000;i++)
        res[i]=0;
    int n;
    scanf("%d",&n);
    while(n)
    {
        size=multiply(res,n,size);
        n--;
    }

    for(i=size-1;i>=0;i--)
    {
        printf("%d",res[i]);
    }
}
