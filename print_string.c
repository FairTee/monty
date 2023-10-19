#include "monty.h"

/**
* print_str - function that prints the string
* @stack: stack
* @line: line count
* Return: null
*/
void print_str(stack_t **stack, unsigned int line)
{
	stack_t *s;
	(void)line;

	s = *stack;
	while (s)
	{
		if (s->n > 127 || s->n <= 0)
		{
			break;
		}
		printf("%c", s->n);
		s = s->next;
	}
	printf("\n");
}
