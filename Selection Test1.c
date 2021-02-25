#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=c+d;
    f=a+b;

    if(b>c&&d>a&&e>f&&a%2==0&&c>0&&d>0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

}

