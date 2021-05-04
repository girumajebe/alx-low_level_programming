#include "holberton.h"
/**
 * _strcmp - compare two strings byte by byte
 * @s1: string one
 * @s2: string two
 *
 * Return: ret
 **/
int _strcmp(char *s1, char *s2)
{
int i, ret;

ret = 0;

for (i = 0; s1[i] != 00; i++)
{
if (s1[i] != s2[i])
{
ret = s1[i] - s2[i];
break;
}
}
return (ret);
}
