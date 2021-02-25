#include<stdio.h>
#define pi 3.14159
int main()
{
    int R;
    double VOLUME;
    while(scanf("%d",&R)==1)
    {
       VOLUME=(4*pi*R*R*R)/3;
       printf("VOLUME = %.3lf\n",VOLUME);

    }
    return 0;
}

