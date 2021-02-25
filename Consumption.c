#include<stdio.h>
int main()
{

    int X;
    float Y,Z;
    while(scanf("%d%f",&X,&Y)==2)
    {
       Z=X/Y;
       printf("%.3f km/l\n",Z);


    }
    return 0;
}

