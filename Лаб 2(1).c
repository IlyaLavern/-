#include <stdio.h>
#include <math.h>


int main()
{
	int y,x,z,q,r,e;
	printf(" x=");
	scanf("%d",&x);
	printf("\n y=");
	scanf("%d",&y);
    z=x*y;
    q=fmod(x,y);
    r=y/x;
    e=floor(r);
	printf("\n ֳ�� ������� �� ������� �����""\n%d",e);
	printf("\n ������ �� ������""\n%d",q);
  printf("\n ������� �����""\n%d",z);
}
