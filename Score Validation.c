#include<stdio.h>
int main()
{
    float n,a=0,b=0,c;
    while(scanf("%f",&n)==1)
    {
        if(n>=0&&n<=10)
        {
            a=a+1;
            b=b+n;
            if(a==2)
                break;
        }
        else
            printf("nota invalida\n");
    }
    c=b/2;
    printf("media = %.2f\n",c);

    return 0;

}

