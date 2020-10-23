#include <stdio.h>
#include <math.h>

int main()
{
 int n=10, m;

 for(m=0; n<=100; n++)
 {
     if (n%3==0)
        m+=n;
 }
 printf("m=%d \n", m);

}
