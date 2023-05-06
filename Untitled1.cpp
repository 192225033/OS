#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,a[20],i;
  printf("enter the no of value");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	printf("enter the number");
  	scanf("&d",&a[i]);
  }  
  for(i=0;i<n;i++){
  	printf("/t%d",a[i]);
  }
  return 0;
}
