#include "monty.h"

/**
 * remove_top - A funtion that prints the top of the stack
 * @stack: A double head pointer to stack
 * @line: Line count
 * Return: null
 */
void remove_top(stack_t **stack, unsigned int line)
{
	stack_t *s;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	*stack = s->next;
	free(s);
}

/**
 * print_top - A funtion that prints the top of the stack
 * @stack: double pointer to the stack
 * @line: line count
 * Return: null
 */
void print_top(stack_t **stack, unsigned int line)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * do_noth - A function that does nothing
 * @stack: double pointer to stack
 * @line: line count
 * Return: null
 */
void do_noth(stack_t **stack, unsigned int line)
{
	(void) line;
	(void) stack;
}
