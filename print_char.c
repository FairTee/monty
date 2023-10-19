#include "monty.h"

/**
* print_char - A function that prints the charac
* @stack: stack
* @line: line count
* Return: null
*/
void print_char(stack_t **stack, unsigned int line)
{
	stack_t *s;

	s = *stack;
	if (!s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (s->n > 127 || s->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", s->n);
}
