#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,s,p;
	printf("\n a=");
	scanf("%d",&a);

	printf("\n b=");
	scanf("%d",&b);

	printf("\n c=");
	scanf("%d",&c);
p = (a+b+c)/2;
	printf("\n P= %d",p);
s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\n S= %d",s);
}
