#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: variable to determine if input is lowercase or uppercase
 *
 * main - uses built in function
 * Return: 0 if succesful
 */

int _isalpha(int c)
{
	int i;
	
	i = 0;
	if (c >= 'a' && c <= 'z')
		i = 1;
	else if (c >= 'A' && c <= 'Z')
		i = 1;
	return (i);
}
