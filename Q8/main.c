#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n= strlen(str);

    char *targ="goodbye";
    int i, j=0;
    for(i=0;i<n;i++)
    {
        if(str[i]==targ[j])
        {   printf("%c", targ[j]);
            j++;
        }
    }

    printf("\n");

    if(j==7)
        printf("YES\n");
    else
        printf("NO\n");
}
