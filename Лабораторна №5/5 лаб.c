#include <stdio.h>
#include <locale.h>

int main(void)
{setlocale(LC_CTYPE, "UKR");

  int n=0, m, i;
  int suma=0, count=0;

  do{
    printf("\n������ ����� ������:");
    scanf("%d", &n);
  }while(n<1);

  int a[n];

  printf("������ �������� m:");
  scanf("%d", &m);

  printf("\n");
  for (i=0; i<n; i++){
    printf("������� �%d = ", 1+i);
    scanf("%d", &a[i]);

      if (((1+i)%2 == 1) && (a[i] > m))
      {
        suma+= a[i];
        count++;
      }
  }

  printf("\n\n���� �� ������� �������� � ��������� ��������, �� ����� �� �������� m:\n");
  printf("\n���� ��������: %d" , suma);
  printf("\nʳ����� ��������: %d\n", count);
  return 0;}
