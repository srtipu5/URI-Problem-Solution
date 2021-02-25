#include<stdio.h>
int main()
{
    double n,a,b,c,d,e,f,g,h,i;
    scanf("%lf",&n);
    a=(n-2000)*.08;
    d=1000*.08;
    e=1500*.18;
    f=(n-3000)*.18;
    g=(n-4500)*.28;
    h=d+f;
    i=d+e+g;
    if(n<=2000)
        printf("Isento\n");
    else if(2000<n&&n<=3000)
        printf("R$ %.2lf\n",a);
    else if(3000<n&&n<=4500)
        printf("R$ %.2lf\n",h);
    else if(n>4500)
        printf("R$ %.2lf\n",i);
    return 0;


}

