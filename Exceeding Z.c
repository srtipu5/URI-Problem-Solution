#include <stdio.h>

int main() {

    int x,y;
    scanf("%d%d",&x,&y);
    while(x >= y)
    {
        scanf("%d",&y);
    }
    int sum = 0,count = 0;
    while(sum < y)
    {
        sum = sum + x;
        count++;
        x++;
    }
    printf("%d\n",count);
    return 0;
}
