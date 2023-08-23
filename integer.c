#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
* _numlen - Function to get the length of an integer
* @num: The integer
* Return: Length of the integer
*/
int _numlen(int num)
{
	int length = 1;

	while (num /= 10)
	{
		length++;
	}
	return (length);
}

/**
* inttostr - Function to convert an integer to a string
* @num: The integer to be converted
* Return: String
*/
char *inttostr(int num)
{
	int isNegative = 0;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	/* Get the length of the integer */
	int length = _numlen(num);

	if (isNegative)
	{
		length++;
	}

	/* Allocate memory for the string */
	char *str = (char *)malloc(length + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	/* Convert the integer to string */
	int index = length;

	str[index] = '\0';

	while (num > 0)
	{
		str[--index] = num % 10 + '0';
		num /= 10;
	}

	if (isNegative)
	{
		str[0] = '-';
	}

	return (str);
}
