#include<stdio.h>
int main()
{
    int NUMBER,b;
    float c,SALARY;
    while(scanf("%d%d%f",&NUMBER,&b,&c)==3)
    {
        SALARY=b*c;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);

    }
    return 0;
}

