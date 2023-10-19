#include "monty.h"

/**
 * sum - A function that sums the top two elements
 * @stack: double pointer to stack
 * @line: line count
 * Return: null
 */
void sum(stack_t **stack, unsigned int line)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	wer = s->n + s->next->n;
	s->next->n = wer;
	*stack = s->next;
	free(s);
}

/**
 * sub_top - A function that subtracts
 * @stack: double stack pointer
 * @line: line sount
 * Return: null
 */
void sub_top(stack_t **stack, unsigned int line)
{
	stack_t *wer;
	int sub, q;

	wer = *stack;
	for (q = 0; wer != NULL; q++)
		wer = wer->next;
	if (q < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	wer = *stack;
	sub = wer->next->n - wer->n;
	wer->next->n = sub;
	*stack = wer->next;
	free(wer);
}

/**
 * mul_top - A funtion that multiplies two elements
 * @stack: double pointer
 * @line: line count
 * Return: null
 */
void mul_top(stack_t **stack, unsigned int line)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	wer = s->next->n * s->n;
	s->next->n = wer;
	*stack = s->next;
	free(s);
}

/**
 * div_top - A funtion that divides two elemets
 * @stack: double pointer
 * @line: line count
 * Return: null
 */
void div_top(stack_t **stack, unsigned int line)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	if (s->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	wer = s->next->n / s->n;
	s->next->n = wer;
	*stack = s->next;
	free(s);
}

/**
* calc_mod - A function that computes the remainder
* @stack: double head pointer to the stack
* @line: line count
* Return: null
*/
void calc_mod(stack_t **stack, unsigned int line)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	if (s->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*stack);
		exit(EXIT_FAILURE);
	}
	wer = s->next->n % s->n;
	s->next->n = wer;
	*stack = s->next;
	free(s);
}
