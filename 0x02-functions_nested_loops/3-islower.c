#include "main.h"
/**
 * _islower - function to check if
 * character is lower case
 * @c: checks input of function
 *
 * Return: retruns 1 if `c` is lowercase
 * otherwise always 0 (Succsess)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
		return (1);
}
	else
	{
		return (0);
	}
}
