#include "alx.h"

/**
 * _strlen - this is a function that returns the lenght of a string
 * @s: type char pointer
 *
 * Return: m
 */

int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
		;
	return (m);

}
/**
 * _strlenc - strlen funct applied to constant char pointer s
 * @s: type char pointer
 *
 * Return: m
 */

int _strlenc(const char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
		;
	return (m);
}
