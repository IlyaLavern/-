#include <stdio.h>
#include <locale.h>


int main()


    {
    int a = 0,  i = 0;

    for(i=0; i < 100; i++)
    {
        if (i % 6 != 0)
         a += i;


    }
    printf("Sum %d \n",a);
    }
