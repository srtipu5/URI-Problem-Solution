#include<stdio.h>
int main()
{
    float a,b;
    while(a!=0||b!=0){
        scanf("%f%f",&a,&b);
        if(a>0&&b>0)
            printf("primeiro\n");
        else if(a<0&&b<0)
            printf("terceiro\n");
        else if(a>0&&b<0)
            printf("quarto\n");
        else if(a<0&&b>0)
            printf("segundo\n");
    }
}

