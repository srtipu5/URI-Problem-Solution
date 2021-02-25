#include<stdio.h>
int main()
{
    int x,y,z,i,j,sum;
    while(scanf("%d%d",&x,&y)==2)
    {
        sum=0;
        if(x==0||y==0)
            break;
        if(x<y)
        {
            for(i=x; i<=y; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
        else if(x>y)
        {
            for(j=y; j<=x; j++)
            {
                sum=sum+j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
