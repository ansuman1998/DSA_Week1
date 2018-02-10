#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **first, **second;
    int m,p,n,sum=0;
    scanf("%d %d",&m, &p);
    first =(int**)malloc(m*sizeof(int));
    int i,j;
    for(i=0;i<m;i++)
    {
        first[i]=(int *)malloc(p*sizeof(int));
    }

    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
        scanf("%d",&first[i][j]);

    scanf("%d %d",&p,&n);
    second =(int**)malloc(p*sizeof(int));

    for(i=0;i<p;i++)
    {
        second[i]=(int *)malloc(n*sizeof(int));
    }

    for(i=0;i<p;i++)
        for(j=0;j<n;j++)
        scanf("%d",&second[i][j]);
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
    int temp1, temp2;
    for(i=0;i<p;i++)
    {   temp1=0; temp2=0;
        for(j=0;j<m;j++)
        {
            temp1+=first[j][i];
        }

        for(j=0;j<n;j++)
        {
            temp2+=second[i][j];
        }

        sum+=(temp1*temp2);
    }

    printf("%d\n", sum);

}
