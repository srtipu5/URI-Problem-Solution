#include<stdio.h>
int main()
{
    int n,x,i=0,j=1,m;
    scanf("%d",&n);
    for(m=0; m<n; m++)
    {
        scanf("%d",&x);
        if(x%2==0)
            printf("%d\n",i);
        else
            printf("%d\n",j);
    }

    return 0;
}

