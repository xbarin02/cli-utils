/** \file args.c
 * args - dump command line arguments
 */
#include <stdio.h>
#include <string.h>

void print_arg(int n, const char *arg)
{
	printf("argument[%i]=\"%s\" (%zu)\n", n, arg, strlen(arg));
}

void dump_args(int argc, char *argv[])
{
	for(int n = 0; n < argc; n++)
	{
		print_arg(n, argv[n]);
	}
}

int main(int argc, char *argv[])
{
	dump_args(argc, argv);

	return 0;
}
