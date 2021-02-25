#include<stdio.h>
int main()
{

    int a,b,i,j;
    scanf("%d",&a);
    if(a%2==0){
        for(i=a+1;i<=a+11;i+=2)
        printf("%d\n",i);}
    else if(a%2!=0){
        for(j=a;j<=a+10;j+=2)
         printf("%d\n",j);}
    return 0;

}

