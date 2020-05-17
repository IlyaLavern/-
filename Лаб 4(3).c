#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int n,x,s1=0,s2=0,s3,i=1,j=1,a;

    while(j<=i)
    {
       s2+=pow(j,2);
       j++;
    }
    while(i<=30)
    {
       s1+=pow(i,2);
       i++;
    }

    a=pow (s1,2)*pow (s2,2)+1;
    printf ("%d",a);
    return 0;
}
