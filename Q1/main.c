#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int count;
    char str[200];
    char **sqr;
    scanf("%d", &count);
    while(count!=0)
    {
        scanf("%s", str);
        int d=strlen(str);
        int dec =0 ,targ;
        for(targ=1;targ<=10;targ++)
        {
            if(targ*targ==d)
            {dec=1; break;}
        }

        if(dec==0)
        {

            printf("No\n");

        }

        else if(dec==1)
        {

            char **sqr;
            sqr=(int **)malloc(targ*sizeof(int *));
            int i,j;
            for(i=0;i<targ;i++)
            {
                sqr[i]=(int *)malloc(targ*sizeof(int));
            }
            int k=0;
            for(i=0;i<targ;i++)
                for(j=0;j<targ;j++)
                    sqr[i][j]=str[k++];

            int z=0;

            for(i=0;i<targ;i++)
                for(j=0;j<targ;j++)
                if(sqr[i][j]!=sqr[j][i])
                z=1;

            for(i=0;i<targ;i++)
                for(j=0;j<targ;j++)
                if(sqr[i][j]!=sqr[targ-i-1][targ-j-1])
                z=1;

            if(z==0)
                printf("Yes\n");
            else
                printf("No\n");



        }


        count--;
    }
}
