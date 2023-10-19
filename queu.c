#include "monty.h"

/**
* use_queue - A function that prints the top of the queue
* @stack: head of queue
* @line: line count
* Return: null
*/
void use_queue(stack_t **stack, unsigned int line)
{
	(void)stack;
	(void)line;
	bus.lifi = 1;
}

/**
* enqueue - A function that adds node to the tail
* @value: new value
* @stack: head of the queue
* Return: null
*/
void enqueue(stack_t **stack, int value)
{
	stack_t *new_one, *wer;

	wer = *stack;
	new_one = malloc(sizeof(stack_t));
	if (new_one == NULL)
	{
		printf("Error\n");
	}
	new_one->n = value;
	new_one->next = NULL;
	if (wer)
	{
		while (wer->next)
			wer = wer->next;
	}
	if (!wer)
	{
		*stack = new_one;
		new_one->prev = NULL;
	}
	else
	{
		wer->next = new_one;
		new_one->prev = wer;
	}
}
