//Assignment name  : inter
//Expected files   : inter.c
//Allowed functions: write
//--------------------------------------------------------------------------------

//Write a program that takes two strings and displays, without doubles, the
//characters that appear in both strings, in the order they appear in the first
//one.

//The display will be followed by a \n.

//If the number of arguments is not 2, the program displays \n.

//Examples:

//$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//padinto$
//$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
//df6ewg4$
//$>./inter "rien" "cette phrase ne cache rien" | cat -e
//rien$
//$>./inter | cat -e
//$

#include <unistd.h>

int contains(char *remember, char c, int should_remember)
{
	int i = 0;
	int found = 0;

	while (remember[i] != '\0')
	{
		if (remember[i] == c)
		{
			found = 1;
			break;
		}
		i++;
	}

	if (found == 0 && should_remember == 1)
	{
		remember[i] = c;
		remember[i + 1] = '\0';
	}

	return found;
}

void inter(char *first_str, char *second_str)
{
	char remember[200000] = "\0";
	int i = 0;

	while (first_str[i])
	{
		if (contains(remember, first_str[i], 1) == 0)
		{
			if (contains(second_str, first_str[i], 0) == 1)
			{
				write(1, &first_str[i], 1);
			}
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write (1, "\n", 1);
	}
	else
	{
		inter(argv[1], argv[2]);
	}
}
