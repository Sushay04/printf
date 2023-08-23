#include <stdio.h>
#include <stdlib.h>
#include "main.h"


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
	int length = _numlen(num);
	char *str = (char *)malloc(length + 1);
	int index = length;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	if (isNegative)
	{
		length++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	str[index] = '\0';

	while (num > 0)
	{
		str[index--] = num % 10 + '0';
		num /= 10;
	}

	if (isNegative)
	{
		str[0] = '-';
	}

	return (str);
}
