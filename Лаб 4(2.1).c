#include <stdio.h>
#include <locale.h>

int main()
{
    int a = 0, i = 0;
    while (i<100)
    {
        if (i % 6 != 0)
        a += i;
        i++;

    }
    printf("Sum = %d",a);

}

