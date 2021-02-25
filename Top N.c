#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1){
    if(n==1)
    printf("Top 1\n");
    else if(n==2||n==3)
     printf("Top 3\n");
    else if(n==4||n==5)
         printf("Top 5\n");
    else if(5<n&&n<=10)
         printf("Top 10\n");
    else if(10<n&&n<=25)
         printf("Top 25\n");
    else if(25<n&&n<=50)
         printf("Top 50\n");
    else if(50<n&&n<=100)
         printf("Top 100\n");}
         return 0;

}

