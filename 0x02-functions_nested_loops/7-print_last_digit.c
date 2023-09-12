#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @i: variable where we extract last number
 * Return: i if succesful
 */

int print_last_digit(int i)
{
	int lastDigit = i % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
