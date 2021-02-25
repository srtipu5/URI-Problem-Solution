
#include<stdio.h>
int main()
{
    int n,c=0,d=0,e=0;
    while(n!=4){
    scanf("%d",&n);
        if(n==1)
        c=c+1;
        else if(n==2)
            d=d+1;
        else if(n==3)
            e=e+1;

    }
      printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",c,d,e);
      return 0;
    }

