#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    scanf("%lld",&n);

    int count=0;
    while(n!=0)
    {
        if(n%2!=0)
            count ++;
        n/=2;
    }

    printf("%d\n", count);

}
