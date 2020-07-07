#include "Xyz.h"
#include <iostream>

int main()
{
	IXyz *xyz = GetXyz();
	int k=xyz->Foo(12);
	xyz->Release();
	std::cout << k << std::endl;

	return 0;
}