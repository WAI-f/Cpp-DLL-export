#ifndef XYZLIBRARY_EXPORTS
#define XYZLIBRARY_EXPORTS
#endif
#include "Xyz.h"

class XyzImpl : public IXyz
{
	int Foo(int n);
	void Release();
};

int XyzImpl::Foo(int n)
{
	return n * n;
}

void XyzImpl::Release()
{
	delete this;
}

XYZAPI IXyz* GetXyz()
{
	return new XyzImpl;
}