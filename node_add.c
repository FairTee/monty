#include "monty.h"

/**
* _node - A function that adds on node
* @stack: stack
* @value: new value
* Return: null
*/
void _node(stack_t **stack, int value)
{
	stack_t *new_one, *wer;

	wer = *stack;
	new_one = malloc(sizeof(stack_t));
	if (new_one == NULL)
	{ printf("Error\n");
		exit(0); }
	if (wer)
		wer->prev = new_one;
	new_one->n = value;
	new_one->next = *stack;
	new_one->prev = NULL;
	*stack = new_one;
}
