#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_failure(void)
{
	puts("You failed the course.");
	exit(0);
}

void print_success(void)
{
	puts("You successfully completed the course.");
	exit(1);
}

void vulnerable(char *arg)
{
	char input[4];
	strcpy(input, arg);
}

int _main(int argc, char **argv)
{

	if (argc != 2) {
		fprintf(stderr, "Error: need a command-line argument\n");
		return 1;
	}

	vulnerable(argv[1]);
	print_failure();
	return 0;
}

