#include "monty.h"

/**
 * push - push to top of the stack
 * @stack: Top of the stack
 *
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *new;

	tmp = *stack;
	new = (stack_t *)malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = line_number;
	new->prev = NULL;
	new->next = NULL;
	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		tmp = *stack;
		new->next = tmp;
		tmp->prev = new;
		*stack = new;
	}
}
