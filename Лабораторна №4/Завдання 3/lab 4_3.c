#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{ setlocale(LC_CTYPE, "ukr");
    int n, x, ip;
   printf ("������ ����� ���� ������� ���� n= \n");
   scanf("%d", &n);
   printf ("������ ����� ���� ������� ������� i= \n");
   scanf("%d", &ip);
   printf ("������ ���� ����� x= \n");
   scanf("%d", &x);

   int j, i, s=0, p=0;

   for (i=1; i<=n; i++)
   { for (s=1, j=1; i<=ip; i++)s*=i+x;
   p+=s;
   printf ("p= %d\n",p);
   return 0;
   }

}
