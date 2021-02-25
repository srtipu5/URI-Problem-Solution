#include<stdio.h>
int main()
{
    int A,B,C,D,DIFERENC;

    while(scanf("%d%d%d%d",&A,&B,&C,&D)==4)

    {
        DIFERENC=A*B-C*D;
        printf("DIFERENCA = %d\n",DIFERENC);

    }

    return 0;
}

