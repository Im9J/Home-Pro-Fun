#include <stdio.h>

int main () {
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=b-a;
	if(a<0)
	{
		a=-a;
	}
	if(b<0)
	{
		b=-b;
	}
	printf("%d %d",a,b);
	return 0;	
}
