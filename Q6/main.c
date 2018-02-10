#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,c,p,prod=1;
   scanf("%lld %lld %lld", &n, &c,&p);
   while(n!=0)
   {
       prod*=c;
       prod = prod % p;
       n--;
   }

   printf("%lld\n",prod);
}
