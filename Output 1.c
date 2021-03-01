#include <stdio.h>

int main()
{
    char f = '-',s = '|';
    int i,j;
    for (i=0; i<39; i++)
    {
        printf("%c",f);
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        printf("%c",s);
        for (j=0; j<37; j++)
        {
            printf(" ");
        }
        printf("%c\n",s);
    }
    for (i=0; i<39; i++)
    {
        printf("%c",f);
    }
    printf("\n");
    return 0;
}

