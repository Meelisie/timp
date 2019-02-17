#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%*c%d", &a, &b);
	c=a+b;
	printf("Result = %d   ",c);
	return 0;
}
