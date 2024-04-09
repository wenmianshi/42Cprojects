//Assignment name  : search_and_replace
//Expected files   : search_and_replace.c
//Allowed functions: write, exit
//--------------------------------------------------------------------------------

//Write a program called search_and_replace that takes 3 arguments, the first
//arguments is a string in which to replace a letter (2nd argument) by
//another one (3rd argument).

//If the number of arguments is not 3, just display a newline.

//If the second argument is not contained in the first one (the string)
//then the program simply rewrites the string followed by a newline.

//Examples:
//$>./search_and_replace "Papache est un sabre" "a" "o"
//Popoche est un sobre
//$>./search_and_replace "zaz" "art" "zul" | cat -e
//$
//$>./search_and_replace "zaz" "r" "u" | cat -e
//zaz$
//$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
//$
//$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
//ZaZ eT David aiME le METal.$
//$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
//eNcOre Un ExEmPle Pas Facile a Ecrire $

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write (1, "\n", 1);
	}
	else
	{
		unsigned int i = 0;
		while (argv[2][i])
		{
			if (!((argv[2][i] >= 'a' && argv[2][i] <= 'z') || (argv[2][i] >= 'A' && argv[2][i] <= 'Z')))
			{
				write (1, "\n", 1);
				return 0;
			}
			i++;
		}
		if (i >= 2)
		{
			write (1, "\n", 1);
			return 0;
		}
		unsigned int j = 0;
		while (argv[3][j])
		{
			if (!((argv[3][j] >= 'a' && argv[3][j] <= 'z') || (argv[3][j] >= 'A' && argv[3][j] <= 'Z')))
			{
				write (1, "\n", 1);
				return 0;
			}
			j++;
		}
		if (j >= 2)
		{
			write (1, "\n", 1);
			return 0;
		}
		unsigned int k =0;
		while (argv[1][k] >= 32 && argv[1][k] <= 126)
		{
			if (((argv[1][k] >= 'a' && argv[1][k] <= 'z') || (argv[1][k] >= 'A' && argv[1][k] <= 'Z')) && (argv[1][k] == argv[2][0]))
			{
				argv[1][k] = argv[3][0];
				write (1, &argv[1][k], 1);
			}
			else
			{
				write (1, &argv[1][k], 1);
			}
			k++;
		}
		write (1, "\n", 1);
	}
}
