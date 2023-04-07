#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
* print_alphabet_x10 - function that will print the alphabet 10 times
*
*/
void print_alphabet_x10(void)

{
int i;
char x;


for (i = 1; i <= 10; i++)
{

for (x = 'a'; x <= 'z'; x++)
{

	putchar(x);


}
putchar('\n');
}
}
