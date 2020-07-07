#include "Xyz.h"
#include <iostream>

int main()
{
	XYZHANDLE handle = GetXyz();
	int k = XyzFoo(handle, 4);
	std::cout << k << std::endl;
	XyzRelease(handle);

	return 0;
}