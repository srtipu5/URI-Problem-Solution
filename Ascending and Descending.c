#include<stdio.h>
int main()
{
    int x,y,t;
    while(x!=y){
        scanf("%d%d",&x,&y);
        if(x>y)
            printf("Decrescente\n");
        else if(y>x)
            printf("Crescente\n");
    }
    return 0;
}

