#include <stdio.h>

int main() {
    int mainArray[20],i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&mainArray[i]);
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,mainArray[19-i]);
    }

    return 0;
}
