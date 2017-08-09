/** \file exe.c
 * exe - dump command line arguments and execute the first argument
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void dump_args(char *argv[])
{
	for(int n = 0; *argv; n++, argv++)
	{
		printf("argv[%i]=\"%s\"\n", n, *argv);
	}
}

int main(int argc, char *argv[])
{
	(void)argc;

	dump_args(argv+1);

	execvp(argv[1], argv+1);

	perror(*argv);

	return EXIT_FAILURE;
}
