#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ulli;

void factorize(char *s)
{
	return;
}
/**
* main - Entry point to the program
*
*@argc: Argument count
*@argv: Argument vector
*
*Return: 0 on success otherwise -1
*/
int main(int argc, char *argv[])
{
	FILE *fp;
	size_t n = 0;
	ulli number;

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		return (-1);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
		return (-2);
	while (fscanf(fp, "%llu", &number) != EOF)
		printf("%llu\n", number);
	return (0);
}
