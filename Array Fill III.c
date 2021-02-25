#include<stdio.h>
int main()
{
    int i;
    double n,N[100];
    scanf("%lf",&n);
    for(i=0;i<100;i++){
        N[i]=n;
        n=n/2;
        printf("N[%d] = %.4lf\n",i,N[i]);
    }

}

