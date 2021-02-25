#include<stdio.h>
int main()
{
    int n,i,c=0,a[5];
    while(scanf("%d",&n)==1){
        for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]==n){
            c=c+1;
        }
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}

