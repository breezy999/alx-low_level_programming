#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: variable to determine the absolute value of an integer
 *
 * Return: i if succesful
 */

int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
