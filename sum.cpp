/** \file sum.cpp
 * sum - sum integers, when piping from stdin
 */
#include <iostream>

int main()
{
	int sum = 0;

	for (int n; std::cin >> n; ) {
		sum += n;
	}

	std::cout << sum << std::endl;

	return sum;
}
