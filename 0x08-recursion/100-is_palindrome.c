#include "main.h"
int actual_prime(int n, int i);
/**
* is_prime_number - says if an integer is a prime number or not
* @n: number to evaluate
*
* Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int n)
{
* _strlen_recursion - returns the length of a string
* @s: string to calculate the length of
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - checks the characters recursively for palindrome
* @s: string to check
* @i: iterator
* @len: length of the string
*
* Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
