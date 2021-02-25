#include<stdio.h>
int main()
{
    double n,a,b,c,d,e,f,g,h,i,j;
    scanf("%lf",&n);
    a=(n*.15);
    b=(n*.12);
    c=(n*.10);
    d=(n*.07);
    e=(n*.04);
    f=a+n;
    g=b+n;
    h=c+n;
    i=d+n;
    j=e+n;
    if(n<=400){
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n",f,a);
            }
        else if(n<=800){
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n",g,b);
            }
        else if(n<=1200){
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n",h,c);
            }
        else if(n<=2000){
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n",i,d);
            }
        else{
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n",j,e);
            }

            return 0;


}

