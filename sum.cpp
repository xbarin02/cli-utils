/** \file sum.c
 * sum - sum integers, when piping from stdin
 */
#include <stdio.h>

int main()
{
	int sum = 0;

	do {
		scanf(" ");

		int i;

		int r = scanf("%i", &i);

		if( EOF == r ) {
			break;
		}

		if( r == 1 ) {
			sum += i;
		} else {
			break;
		}
	} while (true);

	printf("%i\n", sum);

	return sum;
}
