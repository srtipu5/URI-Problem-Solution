#include<stdio.h>
int main()
{
    int n,a,b,i,j,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        if(a%2!=0)
        {
            for(j=a; j<a+(2*b); j=j+2)
            {
                sum=sum+j;
            }
        }

        else
            for(j=a+1; j<a+(2*b); j=j+2)
            {
                sum=sum+j;
            }
        printf("%d\n",sum);
        sum=0;


    }
    return 0;
}

