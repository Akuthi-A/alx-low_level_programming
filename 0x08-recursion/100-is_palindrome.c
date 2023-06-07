#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if string is palindrome
 * @s: input string
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int end = _strlen_recursion(s) - 1;

	return (check_palindrome(s, 0, end));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: input string
 * @start: first index of the string
 * @end: last index of string
 *
 * Return: 1 if palindrome, else 0
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
