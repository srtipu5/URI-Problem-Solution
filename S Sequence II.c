#include<stdio.h>
#include<math.h>
int main()
{
    float value1,value2,first_value1 = 1,last_value1 = 39,first_value2 = 1,term_no;
    float s = 0;
    for(value1=1;value1<=last_value1;value1+=2){
    term_no = (((value1-first_value1)/2)+1);
    value2 = first_value2 * pow(2,term_no-1);
    s = s + (value1/value2);

   }

   printf("%.2f\n",s);

    return 0;
}
