#include<stdio.h>
int main()
{
    int m,n;
    float a,b,c,d,e;
    scanf("%d%d",&m,&n);
    a=4*n;
    b=4.5*n;
    c=5*n;
    d=2*n;
    e=1.5*n;
    if(m==1)
        printf("Total: R$ %.2lf\n",a);
     else if(m==2)
             printf("Total: R$ %.2lf\n",b);
     else if(m==3)
         printf("Total: R$ %.2lf\n",c);
    else if(m==4)
     printf("Total: R$ %.2lf\n",d);
    else
     printf("Total: R$ %.2lf\n",e);
return 0;

}

