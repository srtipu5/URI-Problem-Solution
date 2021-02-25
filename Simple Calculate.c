#include<stdio.h>
int main()
{
    int a,b,c,d;
    double A,B,C;
    scanf("%d%d%lf%d%d%lf",&a,&b,&A,&c,&d,&B);
    C=((b*A)+(d*B));
    printf("VALOR A PAGAR: R$ %.2lf\n",C);
}

