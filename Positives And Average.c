#include<stdio.h>
int main()
{
    int i,c=0;
    float a[6],sum=0,d;
    for(i=0;i<6;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<6;i++){
        if(a[i]>0){

            c=c+1;
            sum=sum+a[i];
            d=sum/c;}}


        printf("%d valores positivos\n%.1f\n",c,d);


    return 0;
}

