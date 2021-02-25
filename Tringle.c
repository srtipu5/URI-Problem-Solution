#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h;
    scanf("%f%f%f",&a,&b,&c);
    d=a+b+c;
    e=(((a+b)/2)*c);
    f=a+b;
    g=a+c;
    h=b+c;
    if(f>c&&g>b&&h>a)
        printf("Perimetro = %.1f\n",d);
    else
        printf("Area = %.1f\n",e);
    return 0;
}

