#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    for(t=1; t<=n; t++)
    {
        int n1,i,count=0;
        scanf("%d",&n1);
        for(i=2; i<=n1; i++)
        {
            if(n1%i==0)
                count=count+i;
        }

        if(count==n1||n1==1)
            printf("%d eh primo\n",n1);
        else
            printf("%d nao eh primo\n",n1);

    }
}

