#include <stdio.h>

int main() {

    int x,y,i,sum = 0;
    scanf("%d%d",&x,&y);
    while(y<=0)
    {
        scanf("%d",&y);
    }
    for(i = x;i<x+y;i++)
    {
        sum = sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
