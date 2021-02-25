#include<stdio.h>
int main()
{
    char str[20];
    double a,b,TOTAL;
    while(scanf("%s%lf%lf",str,&a,&b)==3)
    {
        TOTAL= a+(.15*b);
        printf("TOTAL = R$ %.2lf\n",TOTAL);

    }
    return 0;
}

