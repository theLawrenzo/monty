#include "monty.h"

/**
 * pall - print all data in the satack
 * @stack: Head of the stack
 * @line_number: integer
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->prev;
		}
	}
}
