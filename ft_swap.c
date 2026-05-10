#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a = 15;
	int b = 35;

	printf("Before ft_swap:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	
	ft_swap(&a, &b);

	printf("After ft_swap:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}


