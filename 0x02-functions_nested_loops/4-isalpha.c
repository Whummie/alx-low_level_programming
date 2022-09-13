#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 nif true, 0 if false
 *
 */

int _isalphat(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
	{
		return (1);
	}
	return (0);
}
