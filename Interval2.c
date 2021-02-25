#include<stdio.h>
int main()
{
    int a,b,c=0,i,d=0;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
        if(b>=10&&b<=20)
            c=c+1;
           else
                d=d+1;}
         printf("%d in\n%d out\n",c,d);
}

