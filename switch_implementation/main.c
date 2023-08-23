#include "main.h"
#include <stdio.h>

/**
 * main - asks for user input and calculates it
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, yes_or_no;
	char sign;

	printf("Enter the first operand: ");
	scanf("%d", &a);

	printf("Enter an arithmetic operator: ");
	scanf(" %c", &sign);

	printf("Enter the next operand: ");
	scanf("%d", &b);

	yes_or_no = first_switch(sign, a, b);
	if (yes_or_no)
		return (0);
	second_switch(sign, a, b);

	return (0);
}
