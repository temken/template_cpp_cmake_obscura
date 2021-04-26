#include "module.hpp"

#include "libphysica/Numerics.hpp"

#include "obscura/Astronomy.hpp"

int fib(int n)
{ 
	if (n <= 1) 
		return n;
	else
		return fib(n-1) + fib(n-2); 
} 