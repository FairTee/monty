#include "monty.h"

/**
* rot_right - A function that rotates the stack to the bottom
* @stack: stack head of the stack
* @line: line count
* Return: null
*/

void rot_right(stack_t **stack, __attribute__((unused)) unsigned int line)
{
	stack_t *r;

	r = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (r->next)
	{
		r = r->next;
	}
	r->next = *stack;
	r->prev->next = NULL;
	r->prev = NULL;
	(*stack)->prev = r;
	(*stack) = r;
}
