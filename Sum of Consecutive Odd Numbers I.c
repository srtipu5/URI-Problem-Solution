
#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
    if(a%2==0&&b%2==0&&a>0&&b>0){
        for(i=b+1;i<a;i+=2)
            sum=sum+i;
        printf("%d\n",sum);
    }
   else if(a%2==0&&b%2!=0&&a>0&&b>0){
        for(i=b+2;i<a;i+=2)
            sum=sum+i;
        printf("%d\n",sum);
    }
   else if(a%2!=0&&b%2==0&&a>0&&b>0){
        for(i=b+1;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);
}
else if(a%2!=0&&b%2!=0&&a>0&&b>0){
        for(i=b+2;i<a;i+=2)
        sum=sum+i;
printf("%d\n",sum);
}
else if(a%2==0&&b%2==0&&a>0&&b<0){
        for(i=b+1;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2!=0&&a>0&&b<0){
        for(i=b+2;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2==0&&a>0&&b<0){
        for(i=b+1;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2!=0&&a>0&&b<0){
        for(i=b+2;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2!=0&&a<0&&b<0){
        for(i=b+2;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2==0&&a<0&&b<0){
        for(i=b+1;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2!=0&&a<0&&b<0){
        for(i=b+2;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2==0&&a<0&&b<0){
        for(i=b+1;i<a;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    }
else if(a<b){
    if(a%2==0&&b%2==0&&a>0&&b>0){
        for(i=a+1;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2!=0&&a>0&&b>0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2==0&&a>0&&b>0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2!=0&&a>0&&b>0){
        for(i=a+1;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2==0&&a<0&&b<0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2!=0&&a<0&&b<0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2==0&&a<0&&b<0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2!=0&&a<0&&b<0){
        for(i=b+1;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2==0&&a<0&&b>0){
        for(i=a+1;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2!=0&&a<0&&b>0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2!=0&&b%2==0&&a<0&&b>0){
        for(i=a+2;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}
    else if(a%2==0&&b%2!=0&&a<0&&b>0){
        for(i=a+1;i<b;i+=2)
        sum=sum+i;
    printf("%d\n",sum);}}

else
    printf("0\n");
    return 0;


}

