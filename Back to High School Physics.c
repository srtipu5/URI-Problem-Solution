#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        if((-100<=a<=100)&&0<=b<=200)
        {
            c=2*a*b;
            printf("%d\n",c);
        }
    }
    return 0;
}

