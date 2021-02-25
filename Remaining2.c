
#include<stdio.h>

void main()
 {
       int number , i;


       scanf("%d",&number);

       for(i=0;i<10000;i++)
       {
           if(i%number==2)
           {
               printf("%d\n",i);
           }
       }

 }
