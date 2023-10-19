#include "monty.h"

/**
 * insert - A function that adds up a node to the stack
 * @stack: A double head pointer
 * @line: Our line count
 * Return: null
 */
void insert(stack_t **stack, unsigned int line)
{
	int x, n = 0, tab = 0;


	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			n++;
		for (; bus.arg[n] > 57 || bus.arg[n] < 48)
			tab = 1; }
	if (tab == 1)
	{ fprintf(stderr, "L%d: usage: push integer\n", line);
			fclose(bus.file);
			free(bus.content);
			clear_stack(*stack);
			exit(EXIT_FAILURE); }}

	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		_node(stack, x);
	else
		enqueue(stack, x);
}
