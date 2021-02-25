#include<stdio.h>
int main()
{

    int n,i,a=0,p;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&n);
        if(a<n)
        {
            a=n;
            p=i;
        }
    }
    printf("%d\n%d\n",a,p);
    return 0;

}

