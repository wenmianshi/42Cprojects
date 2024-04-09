/* Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> */

#include <unistd.h>

int main()
{
    int i = 0;
    int value = 0;
    while (i <= 99)
    {
        value += 1;
        if (value % 3 == 0)
        {
            write (1, "fizz", 4);
        }
        else if (value % 5 == 0)
        {
            write (1, "buzz", 4);
        }
        else if (value % 3 == 0 && value % 5 == 0)
        {
            write (1, "fizzbuzz", 8);
        }
        else
        {
            if (value >= 1 && value <= 9)
            {
                char val = value + '0';
                write (1, &val, 1);
            }
            else
            {
                char v1 = (value / 10) + '0';
                char v2 = (value % 10) + '0';
                write (1, &v1, 1);
                write (1, &v2, 1);
            }
        }  
        write (1, "\n", 1);
        i++;   
    }
}