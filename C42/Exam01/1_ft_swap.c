//Assignment name  : ft_swap
//Expected files   : ft_swap.c
//Allowed functions:
//--------------------------------------------------------------------------------

//Write a function that swaps the contents of two integers the adresses of which
//are passed as parameters.

//Your function must be declared as follows:

//void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

//#include <stdio.h>

//int main()
//{
//	int a = 5;
//	int b = 4;
//	ft_swap(&a, &b);
//	printf("a = %d, b = %d", a, b);
//}
