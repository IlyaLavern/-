#include <stdio.h>
#include <math.h>

int main()
{
 int n=10, m=0;

 do
{
     if (n%3==0)
     m+=n;
     n++;
}
    while (n<=100);
    printf("m=%d \n", m);

}
