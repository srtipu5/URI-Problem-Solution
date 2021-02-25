
#include<stdio.h>
int main(){
   int a,b,c,d,e,f,r,h,i,j,k,l,g;
   double A;
   scanf("%lf", &A);
   if(0<=A<=1000000.00){
    r=A*100;
    a=r/10000;
    b=(r-(a*10000))/5000;
    c=(r-((a*10000)+(b*5000)))/2000;
    d=(r-((a*10000)+(b*5000)+(c*2000)))/1000;
    e=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)))/500;
    f=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)))/200;
    g=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)+(f*200)))/100;
    h=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)+(f*200)+(g*100)))/50;
    i=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)+(f*200)+(g*100)+(h*50)))/25;
    j=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)+(f*200)+(g*100)+(h*50)+(i*25)))/10;
    k=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)+(f*200)+(g*100)+(h*50)+(i*25)+(j*10)))/5;
    l=(r-((a*10000)+(b*5000)+(c*2000)+(d*1000)+(e*500)+(f*200)+(g*100)+(h*50)+(i*25)+(j*10)+(k*5)));


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);
    }
       }
