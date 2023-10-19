#include "monty.h"

/**
* rot_left- A function that rotates the stack
* @stack: head of the stack
* @line: line count
* Return: null
*/

void rot_left(stack_t **stack,  __attribute__((unused)) unsigned int line)
{
	stack_t *w = *stack, *x;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	x = (*stack)->next;
	x->prev = NULL;
	while (w->next != NULL)
	{
		w = w->next;
	}
	w->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = w;
	(*stack) = x;
}
