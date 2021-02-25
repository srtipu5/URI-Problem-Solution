
#include<stdio.h>
int main()
{
    int n;
    float a,b,c;
    scanf("%d",&n);
    while(n--){
        scanf("%f%f",&a,&b);
        c=a/b;
       if(b==0)
        printf("divisao impossivel\n");
        else
            printf("%.1f\n",c);
    }
    return 0;
}
