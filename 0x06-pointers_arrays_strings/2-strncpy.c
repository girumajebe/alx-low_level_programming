#include "holberton.h"
/**
 * *_strncpy -copies n bytes of an string
 * @src: source
 * @dest: destination
 * @n: number of bytes to copy
 *
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != 00; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = 00;
i++;
}
return (dest);
}
