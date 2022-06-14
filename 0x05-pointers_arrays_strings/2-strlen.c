#include <main.h>

/**
 * _strlen -> to get length of string 
 * @s: string pointer
 * Return: length of the string
 */

int _strlen(char *s);

{
	int len;

	for(; *s != '/0'; s++)
	{
		len +=1;
	}
	return (strlen(s));
}	
