#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - prime identifier
 * @n: number
 * Return: check_prime
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - it checks prime numbers
 * @n: number
 * @i: iterator
 * Return: a 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n %  1 == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		_putchar(1);
	return (check_prime(n, i + 1));
}
