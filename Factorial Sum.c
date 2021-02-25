#include<stdio.h>
int main()
{
    long long a,b,c,f1=1,f2=1,i,j;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {

        for(i=1; i<=a; i++)
        {
            f1=f1*i;
        }
        for(j=1; j<=b; j++)
        {
            f2=f2*j;
        }
        printf("%lld\n",f1+f2);
        f1=1;
        f2=1;
    }
    return 0;
}

