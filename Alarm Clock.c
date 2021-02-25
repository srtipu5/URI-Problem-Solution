#include<stdio.h>
int main()
{
    int a,b,c,d,A,B,ans;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;


        A=((a*60)+b);
        B=((c*60)+d);

        if(A<B)
            ans=B-A;
        else
            ans=B+1440-A;

            printf("%d\n",ans);
    }
    return 0;
}


