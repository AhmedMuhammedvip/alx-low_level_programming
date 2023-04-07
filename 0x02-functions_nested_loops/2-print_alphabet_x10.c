#include "main.h"
#include<stdio.h>
/**
 * print_alphabet_10x - function that will print the alphabet 10 times
*
*/
void print_alphabet_10x(void)
{
for (int i = 1; i <= 10; i++)
{

for (char x = 'a'; x <= 'z'; x++)


	putchar(x);


}
putchar('\n');
}
