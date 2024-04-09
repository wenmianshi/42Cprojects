/*
Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in ascending order.

*/

#include <unistd.h>

int main()
{
    int i = 0;
    while (i <= 9)
    {
        write(1, "0123456789", 1);
        i++;
    }
}
