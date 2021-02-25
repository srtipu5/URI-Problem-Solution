#include<stdio.h>
int main()
{
    int i,j,k,l,n,a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(a=1; a<=3; a++)
        {
            if(a==1)
            {
                j=i;
            }
            else if(a==2)
            {
                k=i*i;
            }
            else if(a==3)
            {
                l=i*i*i;
            }

        }
        printf("%d %d %d\n",j,k,l);


    }
}

