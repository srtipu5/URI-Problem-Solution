#include<stdio.h>
int main()
{

    int n,c=0,sum=0;
    double a;

    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
        if(n>0)
        {
            c=c+1;
            sum=sum+n;
            a=(double)sum/c;
        }
    }
    printf("%.2lf\n",a);

    return 0;
}

