#include<stdio.h>
int main()
{

    int n[5],i,a=0,b=0,c=0,d=0;
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
 for(i=0;i<5;i++){
        if(n[i]%2==0)
            c=c+1;
    }
    printf("%d valor(es) par(es)\n",c);
    for(i=0;i<5;i++){
        if(n[i]%2!=0)
            d=d+1;
    }
    printf("%d valor(es) impar(es)\n",d);
    for(i=0;i<5;i++){
        if(n[i]>0)
            a=a+1;
    }
      printf("%d valor(es) positivo(s)\n",a);
       for(i=0;i<5;i++){
        if(n[i]<0)
            b=b+1;
    }
      printf("%d valor(es) negativo(s)\n",b);

}

