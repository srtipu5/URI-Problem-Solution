#include<stdio.h>
int main()
{

    int n,i,a;
    scanf("%d",&n);
    if(n%2==0){
        for(i=2;i<=n;i+=2){
            a=i*i;
        printf("%d^2 = %d\n",i,a);
    }}
    else if(n%2!=0){
        for(i=2;i<n;i+=2){
            a=i*i;
            printf("%d^2 = %d\n",i,a);

        }
    }
    return 0;
}

