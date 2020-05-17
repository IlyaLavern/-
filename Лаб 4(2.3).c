#include <stdio.h>
#include <locale.h>
int main()
{

int s = 0, i = 0;
do {

if (i %6 != 0) s += i;
i++;
} while (i < 100);
printf("Sum = %d", s);
}
