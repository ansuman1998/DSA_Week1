#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100][100];
    int i,j=0,k=0,sp=0, choice=0;
    char targ[100];
    scanf("%[^\n]s",targ);
    int n = strlen(targ);
    for(i=0;i<n;i++)
    {
        if(targ[i]==' ')
            sp++;
    }

    printf("Do you want to encode (Press 0) or decode (Press 1)?\n");
    scanf("%d",&choice);

    for(i=0;i<n;i++)
    {
        if(targ[i]!=' ')
        str[j][k++]=targ[i];

       else if(targ[i]==' ')
        {   str[j][k]='\0';
            j++;
            k=0;
        }
    }
    int wsize;
    char temp;
    for(j=0;j<=sp;j++)
    {   wsize=0;
        for(k=0;str[j][k]!='\0';k++)
        {
            wsize++;
        }

        //ydprintf("%d\n",wsize);
     /*   for(k=0;k<wsize;k++)
            printf("%c",str[j][k]);
        printf("\n"); */

        for(k=0;k<wsize/2;k++)
        {
            temp = str[j][k];
            str[j][k]=str[j][wsize-k-1];
            //printf("%c\n",temp);
            str[j][wsize-k-1] = temp;
        }

       /*    for(k=0;k<wsize;k++)
            printf("%c",str[j][k]);
        printf("\n"); */

        if(choice==0)
        {
            for(k=0;k<wsize;k++)
            {
                if(str[j][k]=='x')
                    str[j][k]='a';
                else if(str[j][k]=='y')
                    str[j][k]='b';
                else if(str[j][k]=='z')
                    str[j][k]='c';
                else
                    str[j][k]+=3;
            }
        }

        else if (choice==1)
        {
            for(k=0;k<wsize;k++)
            {
                if(str[j][k]=='a')
                    str[j][k]='x';
                else if(str[j][k]=='b')
                    str[j][k]='y';
                else if(str[j][k]=='c')
                    str[j][k]='z';
                else
                    str[j][k]-=3;
            }
        }

        for(k=0;k<wsize;k++)
            printf("%c",str[j][k]);

        printf(" ");
    }
}
