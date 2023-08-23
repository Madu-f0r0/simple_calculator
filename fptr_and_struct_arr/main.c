#include "main.h"
#include <stdio.h>

/**
 * main - performs an arithmetic operation on two integer inputs from a user
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, value;
	unsigned long int i;
	char sign;

	arithmetics_t arr[] = {
		{add, '+'},
		{subtract, '-'},
		{multiply, '*'},
		{divide, '/'}
	};

	printf("Enter the first operand: ");
	scanf("%d", &a);

	printf("Enter an arithmetic operator: ");
	scanf(" %c", &sign);

	printf("Enter the next operand: ");
	scanf("%d", &b);

	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		if (sign == arr[i].sign)
		{
			value = calculate(a, b, arr[i].func);
		}
	}
	printf("The result is: %d\n", value);

	return (0);
}

/**
 * calculate - performs a selected arithmetic operation on two ints
 * @a: the first integer operand
 * @b: the second integer operand
 * @func: pointer to the appropriate arithmetic operation function
 *
 * Return: the result of the arithmetic operation
 */
int calculate(int a, int b, int (*func)(int, int))
{
	int value = 0;

	value = func(a, b);

	return (value);
}
