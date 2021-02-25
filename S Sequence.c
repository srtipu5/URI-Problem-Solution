#include<stdio.h>
int main()
{
    float i,j,k=0;
    for(i=1; i<=100; i++)
    {
        j=1/i;
        k=k+j;
    }
    printf("%.2f\n",k);
    return 0;

}

