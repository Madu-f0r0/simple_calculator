#ifndef MAIN_H
#define MAIN_H

/**
 * struct arithmetics - a struct containing two elements
 * @func: a pointer to a function with two int arguments that returns an int
 * @sign: receives an arithmetic operator as value
 *
 * Description: structure that links an arithmetic operator to its
 * corresponding function to perform the arithmetic operation
 */
typedef struct arithmetics
{
	int (*func)(int, int);
	char sign;
} arithmetics_t;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int calculate(int, int, int (*)(int, int));

#endif /* MAIN_H */
