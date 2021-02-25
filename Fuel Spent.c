#include<stdio.h>
int main()
{
    int a,b;
    double c;
    while(scanf("%d%d",&a,&b)==2)
    {
        c=(double)(a*b)/12;
        printf("%.3lf\n",c);
    }
    return 0;
}

