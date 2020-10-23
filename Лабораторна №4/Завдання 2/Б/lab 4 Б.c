#include <stdio.h>
#include <math.h>

int main()
{
 int n=10, m=0;
 while (n<=100)
 {
     if (n%3==0)
        m+=n;
        n++;
 }
 printf("m=%d \n", m);

}
