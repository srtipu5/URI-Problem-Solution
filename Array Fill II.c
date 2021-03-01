#include <stdio.h>

int main() {

    int t,array[1000];
    scanf("%d",&t);
    int i,j=0;
    for(i=0;i<1000;i++)
    {
        array[i]=j;
        printf("N[%d] = %d\n",i,array[i]);
        if(j ==(t-1))
        {
            j = 0;
        }
        else
        {
            j++;
        }

    }
    return 0;
}
