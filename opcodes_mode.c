#include "monty.h"

/**
 * addst - change mode of push to stack
 * @stack: stack
 * @nline: line number
 *
 * Return: Nothing
 */
void addst(stack_t **stack, unsigned int nline)
{
	(void)nline;
	(void)stack;

	arg.flag = 0;
}

/**
 * addqu - change mode of push to queue
 * @stack: stack
 * @nline: line number
 *
 * Return: Nothing
 */
void addqu(stack_t **stack, unsigned int nline)
{
	(void)nline;
	(void)stack;

	arg.flag = 1;
}
