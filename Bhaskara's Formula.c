#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,R1,R2;
    scanf("%lf%lf%lf",&a,&b,&c);

    R1=((-b)+sqrt(b*b-4*a*c))/(2*a);
    R2=((-b)-sqrt(b*b-4*a*c))/(2*a);
    if((b*b-4*a*c)<0||(2*a)==0)
        printf("Impossivel calcular\n");

    else
    printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);

    return 0;
}

