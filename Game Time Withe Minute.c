#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=(24-a)+c;
    f=c-a;
    g=(d-b);
    h=(60+d)-b;
    i=(c-a-1);
    j=(24-a+c-1);
    if(a==c&&b==d)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(a>c&&b==d)
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",e);
    else if(a<c&&b==d)
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",f);
        else if(a<c&&b>d)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,h);
        else if(a<c&&b<d)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f,g);
        else if(a>c&&b>d)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,h);
        else if(a>c&&b<d)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,g);
            else if(a==c&&b<d)
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",g);
            else if(a==c&&b>d)
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,h);
        return 0;


    return 0;

}

