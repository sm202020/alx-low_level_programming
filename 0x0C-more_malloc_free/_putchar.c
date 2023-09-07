#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * 0c: The character to print
 *
 * Return: on cuccess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcha(char c)
{
	return (write(1,&c,1));
}	
