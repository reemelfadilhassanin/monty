#include "monty.h"
int main (int argc, char** argv)
{
	FILE* fptr;
	int line_num = 0;
	char buffer[50];
	char** command = NULL;
	stack_t *stack;
	

	(void) argv;
	(void) command;
	

	if (argc != 2)
	{
		fprintf(stderr,"USAGE: monty file\n");
		exit(127);
	}
	fptr = fopen(argv[1],"r");
	if (fptr == NULL)
	{
		fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
		exit(127);
	}
	stack = new_stack();
	if (stack == NULL)
	{
		printf("faild");
		exit(127);
	}
	while(fgets(buffer,sizeof(buffer), fptr))
	
		/*if (fgets(buffer,sizeof(buffer), fptr))*/
		{
			
			line_num++;
			command = toknizer(buffer);
			command_handle(command, &stack);
		}
		fclose(fptr);

	
 return 0;
}
