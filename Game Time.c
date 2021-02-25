#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=(24-a)+b;
    d=b-a;
    if(a==b)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(a>b)
        printf("O JOGO DUROU %d HORA(S)\n",c);
    else
        printf("O JOGO DUROU %d HORA(S)\n",d);
    return 0;

}

