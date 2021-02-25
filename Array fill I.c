#include<stdio.h>
int main()
{
    int n,i,N[10];
    scanf("%d",&n);
    for(i=0;i<10;i++){
        N[i]=n;
        n=2*n;
        printf("N[%d] = %d\n",i,N[i]);
    }

}

