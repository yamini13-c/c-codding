#include<stdio.h>
main()
{
  int a=10,b=20;
  printf("a=%d and b=%d before swapping",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d and b=%d after swapping",a,b);
  return 0;
}
