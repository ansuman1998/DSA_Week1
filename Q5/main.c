#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   long long int n,prod=1,i;
   scanf("%lld",&n);

   for(i=0;i<n;i++)
   {
       prod*=2;
       prod = prod%(int)pow(10,10);
   }

   printf("%d\n", prod);
}
