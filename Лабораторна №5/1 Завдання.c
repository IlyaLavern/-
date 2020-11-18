#include <stdio.h>
#include <locale.h>

int main(void)
{setlocale(LC_CTYPE, "UKR");

  int n=0, m, i;
  int suma=0, count=0;

  do{
    printf("\nВведіть розмір масиву:");
    scanf("%d", &n);
  }while(n<1);

  int a[n];

  printf("Введіть значення m:");
  scanf("%d", &m);

  printf("\n");
  for (i=0; i<n; i++){
    printf("Елемент №%d = ", 1+i);
    scanf("%d", &a[i]);

      if (((1+i)%2 == 1) && (a[i] > m))
      {
        suma+= a[i];
        count++;
      }
  }

  printf("\n\nСума та кількість елементів з непарними номерами, які більші за значення m:\n");
  printf("\nСума елементів: %d" , suma);
  printf("\nКілкість елементів: %d\n", count);
  return 0;}
