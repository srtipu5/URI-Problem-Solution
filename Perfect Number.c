#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1; k<=t;k++)
    {
        int n,i,count=0;
        scanf("%d",&n);
        for(i=1; i<n; i++)
        {
            if(n%i==0)
                count=count+i;

        }
        if(count==n)
            printf("%d eh perfeito\n",n);
        else
            printf("%d nao eh perfeito\n",n);
    }
}



