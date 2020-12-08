#include <stdio.h>
#include <locale.h>

int n;

void init(int *a);
void print(int *a);
int min(int *a);

int main(void)
{ setlocale(LC_CTYPE, "ukr");
	int min_index;

	printf("\nn = ");
	scanf("%d", &n);

	int a[n];

	init(a);
	print(a);

	min_index = min(a);
	if (min_index == -1)
	{
		printf("\n У масиві лише парні елементи\n");
	} else printf("\nІндекс найменшого непарного елемента одновимірного масива: %d\n", min_index);

return 0;
}

void init(int *a){
	printf("\n");
	for(int i = 0; i < n; i++)
	{
	printf("a[%d] = ", i);
	scanf("%d", &a[i]);
	}
}

void print(int *a){
	printf("\n");
	for(int i = 0; i < n; i++)
	{
	printf("a[%d] = %d\n", i, a[i]);
	}
}

int min(int *a){
	int min = a[0];
	int min_i = -1;
	for(int i = 0; i < n; i++)
	{
		if (a[i]%2 != 0 && a[i] <= min)
		{
			min = a[i];
			min_i = i;
		}
	}

	return min_i;
}
