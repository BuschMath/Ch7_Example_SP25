#include <iostream>

int fib(int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	for(int i=0; i<10; i++)
		std::cout << fib(i) << ", "; // 1 1 2 3 5 8 13 21 34 55

	std::cout << "\b\b";

	return 0;
}