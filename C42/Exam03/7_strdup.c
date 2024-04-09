//Assignment name  : ft_strdup
//Expected files   : ft_strdup.c
//Allowed functions: malloc
//--------------------------------------------------------------------------------

//Reproduce the behavior of the function strdup (man strdup).

//Your function must be declared as follows:

//char    *ft_strdup(char *src);

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	unsigned int i = 0;
	while (src[i])
	{
		i++;
	}
	char *dest = malloc(sizeof(char)* (i+1));
	unsigned int j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

//#include <stdio.h>

//int main()
//{
//	char src[] = "Pascal";
//	printf("%s", ft_strdup(src));
//}

