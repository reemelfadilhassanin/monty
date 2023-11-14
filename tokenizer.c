#include "monty.h"
#include <string.h>
/**
 * toknizer - function that spilit string to token
 * @line: string to be spilted
 * Return: array of pointer to token strings
*/
char **toknizer(char *line)
{
	char *token;
	char *tmp;

	char **command = NULL;
	int cpt = 0, i = 0;

	if (!line)
	return (NULL);
	tmp = _strdup(line);
	token = strtok(tmp, del);
	if (token == NULL)
	{
		
		free(tmp), tmp = NULL;
		free(line), line = NULL;
		return (NULL);
	}
	while (token)
	{
		cpt++;
		token = strtok(NULL, del);
	}

free(tmp), tmp = NULL;

command = malloc(sizeof(char *) * (cpt + 1));
if (command  == NULL)
{
	free(line);
	return (NULL);
}
token = strtok(line, del);

while (token)
{
command[i] = _strdup(token);
token = strtok(NULL, del);
i++;
}
/*free(line), line = NULL;*/
command[i] = NULL;
return (command);

}
