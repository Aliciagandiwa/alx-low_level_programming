#include "main.h"

/**
 * _strcmp -  compares two strings.
 * @s1: A point to first string
 * @s2: A point to second string
 * Return: if str1 < str2, the negative differnece of the first unmatched char
 * if srt1 == srt2,0
 * if srt1 > srt2 , the positive differnce of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
