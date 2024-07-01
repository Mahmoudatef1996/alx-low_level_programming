#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - printing alphapet
 *
 * Return: no return
 */
void print_alphabet(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
                _putchar(ch);
                ch++;
        }
        _putchar('\n');
}
