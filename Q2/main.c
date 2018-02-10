#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char small[100], large[1000];
    char str[100][100];
    scanf("%s",small);
    scanf(" %[^\n]s",large);
    //strcpy(large,"that cat is not that hot");
    printf("%s\n",small);
    printf("%s\n",large);

    //scanf("%s",small);
    int maincount=0;
    int i,j,k,sp=0;
    int sno = strlen(small);
    int lno = strlen(large);
    printf("%d %d\n",sno,lno);

    ///////////////////////////imported code///////////////////////////////////
     for(i=0;i<lno;i++)
    {
        if(large[i]==' ')
            sp++;
    }

    printf("%d\n",sp);
    k=0;
    j=0;
     for(i=0;i<lno;i++)
    {
        if(large[i]!=' ')
          str[j][k++]=large[i];

       else if(large[i]==' ')
        {   str[j][k]='\0';
            j++;
            k=0;
        }
    }

    for(i=0;i<=sp;i++)
    {
        if(strcmp(str[i],small)==0)
            maincount++;
    }

    ///////////////////////////////////////////////////////////////////////////


    printf("%d\n",maincount);
}
