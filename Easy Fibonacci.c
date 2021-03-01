#include <stdio.h>

int main() {
    int n,count = 2,nextNumber;
    scanf("%d",&n);
    int firstNumber = 0,secondNumber = 1;
    if(n==1)
    {
        printf("%d\n",firstNumber);
    }
    else if(n==2)
    {
         printf("%d %d\n",firstNumber,secondNumber);
    }
    else
    {
        printf("%d %d",firstNumber,secondNumber);
        while(count != n)
        {
              nextNumber = firstNumber+secondNumber;
              firstNumber = secondNumber;
              secondNumber = nextNumber;
              count++;
              printf(" %d",nextNumber);
        }
        printf("\n");
    }
    return 0;
}
