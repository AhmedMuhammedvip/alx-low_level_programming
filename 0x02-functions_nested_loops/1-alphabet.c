#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char x = 'A';

while (x <= 'Z')
{
	_putchar(x);
	_putchar('\n');
	x++;
}
}
int main(void)
{
	print_alphabet();
	return (0);
}
