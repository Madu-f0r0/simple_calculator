#include "main.h"
#include <stdio.h>

/**
 * first_switch - checks for and implements the '+' or '-' operators
 * @sign: variable containing the operator inputted
 * @a: the first operand to be computed
 * @b: the second operand to be computed
 *
 * Return: 1 if an addition or subtraction was implemented
 * else 0 is returned
 */
int first_switch(char sign, int a, int b)
{
	int yes_or_no = 0;
	int value;

	switch (sign)
	{
		case '+':
			value = add(a, b);
			printf("Value: %d\n", value);
			yes_or_no = 1;
			break;
		case '-':
			value = subtract(a, b);
			printf("Value: %d\n", value);
			yes_or_no = 1;
			break;
	}
	return (yes_or_no);
}

/**
 * second_switch - checks for and implements the '*' or '/' operators
 * @sign: variable containing the operator inputted
 * @a: the first operand to be computed
 * @b: the second operand to be computed
 *
 * Return: 1 if an multiplication or division was implemented
 * else 0 is returned
 */
int second_switch(char sign, int a, int b)
{
	int yes_or_no = 0;
	int value;

	switch (sign)
	{
		case '*':
			value = multiply(a, b);
			printf("Value: %d\n", value);
			yes_or_no = 1;
			break;
		case '/':
			value = divide(a, b);
			printf("Value: %d\n", value);
			yes_or_no = 1;
			break;
	}
	return (yes_or_no);
}
