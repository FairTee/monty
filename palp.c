#include "monty.h"

/**
 * display - A function that prints what is in the stack
 * @stack: double pointer to a stack
 * @line: line count
 * Return: null
 */
void display(stack_t **stack, unsigned int line)
{
	stack_t *s;
	(void)line;

	s = *stack;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}

/**
 * switch_top - A function that switches the top elements
 * @stack: stack
 * @line: line count
 * Return: null
 */
void switch_top(stack_t **stack, unsigned int line)
{
	stack_t *s;
	int len = 0, wer;

	s = *stack;
	while (s)
	{
		s = s->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	wer = s->n;
	s->n = s->next->n;
	s->next->n = wer;
}
