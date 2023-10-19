#include "monty.h"

/**
* clear_stack - A function that frees a doubly linked list
* @stack: head pointer to the stack
*
* Return: null
*/
void clear_stack(stack_t *stack)
{
	stack_t *wer;

	wer = stack;
	while (stack)
	{
		wer = stack->next;
		free(stack);
		stack = wer;
	}
}

/**
* use_stack - A function that prints the top
* @stack: head of stack
* @line: line count
*
* Return: null
*/
void use_stack(stack_t **stack, unsigned int line)
{
	(void)stack;
	(void)line;
	bus.lifi = 0;
}
