#define  _POSIX_C_SOURCE 200809L
#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - function for monty code interpreter
* @argc: argument count
* @argv: argument value
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *inst;
	FILE *file;
	size_t size = 0;
	ssize_t check_line = 1;
	stack_t *stack = NULL;
	unsigned int line = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (check_line > 0)
	{
		inst = NULL;
		check_line = getline(&inst, &size, file);
		bus.content = inst;
		line++;
		if (check_line > 0)
		{
			ex_inst(inst, &stack, line, file);
		}
		free(inst);
	}
	clear_stack(stack);
	fclose(file);
return (0);
}
