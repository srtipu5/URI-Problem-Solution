#include<stdio.h>
int main()
{
    int a,i,j,sum=0;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
        {
            break;
        }
        if(a%2==0)
        {
            for(j=a; j<a+10; j=j+2)
            {
                sum=sum+j;
            }
        }

        else
            for(j=a+1; j<=a+10; j=j+2)
            {
                sum=sum+j;
            }
        printf("%d\n",sum);

        sum=0;
    }


    return 0;
}

