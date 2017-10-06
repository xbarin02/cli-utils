/** \file rand.c
 * rand - display a pseudo-random sequence
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int numb = ( argc > 1 ) ? atoi(argv[1]) : 1;
	int seed = ( argc > 2 ) ? atoi(argv[2]) : (int)time(0);

	srand((unsigned int)seed);

	for(int n = 0; n < numb; n++)
	{
		printf("%i\n", rand());
	}

	return 0;
}
