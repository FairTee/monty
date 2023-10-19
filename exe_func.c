#include "monty.h"

/**
* ex_inst - A function that executes the opcode
* @stack: The head stack linked list
* @line: line count
* @file: pointer to monty file stream
* @inst: line content
*
* Return: null
*/

int ex_inst(char *inst, stack_t **stack, unsigned int line, FILE *file)
{

	instruction_t opst[] = {
				{"push", insert}, {"pall", display}, {"pint", print_top},
				{"pop", remove_top}, {"swap", switch_top}, {"add", sum},
				{"nop", do_noth}, {"sub", sub_top}, {"div", div_top},
				{"mul", mul_top}, {"mod", calc_mod}, {"pchar", print_char},
				{"pstr", print_str}, {"rotl", rot_left}, {"rotr", rot_right},
				{"queue", use_queue}, {"stack", use_stack},
				{NULL, NULL}
				};

	unsigned int x = 0;
	char *y;

	y = strtok(inst, " \n\t");
	if (y && y[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && y)
	{
		if (strcmp(y, opst[x].opcode) == 0)
		{	opst[x].f(stack, line);
			return (0);
		}
		x++;
	}

	if (y && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line, y);
		fclose(file);
		free(inst);
		clear_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
