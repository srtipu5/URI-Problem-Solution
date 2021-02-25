#include <stdio.h>
int main()
{
    int n,b,c,d,e,f;
    scanf("%d", &n);
    for(b=1; b<=n; b++)
    {
        c=b*b;
        d=b*b*b;
        printf("%d %d %d\n",b,c,d);
        e=c+1;
        f=d+1;
        printf("%d %d %d\n",b,e,f);
    }
    return 0;
}

