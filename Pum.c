#include <stdio.h>

int main() {

    int n,i,j,count = 0,start = 1;
    scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=start;j<start+3;j++)
      {
       printf("%d ",j);
      }
      printf("PUM\n");
      count++;
     start = count*3+(count+1);
  }

    return 0;
}
