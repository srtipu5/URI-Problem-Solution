#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
    scanf("Dia %d\n",&a);
    scanf("%d : %d : %d\n",&b,&c,&d);
    scanf("Dia %d\n",&e);
    scanf("%d : %d : %d",&f,&g,&h);
    i=a*86400+b*3600+c*60+d;
    j=e*86400+f*3600+g*60+h;
    k=j-i;
    l=k/86400;
    m=(k-(l*86400))/3600;
    n=(k-(l*86400)-(m*3600))/60;
    o=(k-(l*86400)-(m*3600)-(n*60));

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",l,m,n,o);


}

