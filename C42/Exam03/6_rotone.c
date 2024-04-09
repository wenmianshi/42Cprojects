/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$> */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write (1, "\n", 1);
    }
    else
    {
        unsigned int i = 0;
        while (argv[1][i])
        {
            if((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
            {
                argv[1][i] = argv[1][i] + 1;
                write (1, &argv[1][i], 1);
            }
            else if(argv[1][i] == 'z' || argv[1][i] == 'Z')
            {
                argv[1][i] = argv[1][i] - 25;
                write (1, &argv[1][i], 1);
            }
            else if( (argv[1][i] >= 32 && argv[1][i] <= 64) || (argv[1][i] >= 91 && argv[1][i] <= 96) || (argv[1][i] >= 123 && argv[1][i] <= 126))
            {
                write (1, &argv[1][i], 1);
            }
            else
            {
                return 1;
            }
            i++;
        }
        write (1, "\n", 1);
    }
}