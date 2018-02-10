#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top =-1;
struct count
{
    char c;
    int f;
};

struct count* data[100];

void add(char c)
{
    struct count *temp;
    temp = (struct count*)malloc(sizeof(struct count));
    temp->c=c;
    temp->f=1;
    data[++top]=temp;

}

void update(char c)
{
    int i;
    for(i=0;i<+top;i++)
    {
        if(data[i]->c==c)
            (data[i]->f)++;
    }
}

int check(char c)
{
    int count=0;
    int i;
    for(i=0;i<=top;i++)
    {
        if(data[i]->c==c)
        {
            count=1;
            break;
        }
    }

    return count;
}

int main()
{
    char c;
    scanf("%c",&c);
    while(c!='\n')
    {
        if(check(c)==0)
            add(c);
        else
            update(c);

        scanf("%c",&c);
    }

    int i;
    for(i=0;i<=top;i++)
    {
        printf("%c %d\n",data[i]->c,data[i]->f);

    }

}
