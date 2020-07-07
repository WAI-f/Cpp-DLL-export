#ifndef XYZLIBRARY_EXPORTS
#define XYZLIBRARY_EXPORTS
#endif
#include "Xyz.h"

class XyzImpl
{
public:
	int Foo(int n);
	void Release();
};

int XyzImpl::Foo(int n)
{
	return n*n;
}

void XyzImpl::Release()
{
	delete this;
}

XYZAPI XYZHANDLE GetXyz()
{
	return (XYZHANDLE)(new XyzImpl);
}

XYZAPI int XyzFoo(XYZHANDLE handle, int n)
{
	int nResult = -1;
	if (handle)
	{
		nResult = ((XyzImpl *)handle)->Foo(n);
	}
	return nResult;
}

XYZAPI void XyzRelease(XYZHANDLE handle)
{
	if (handle)
	{
		((XyzImpl *)handle)->Release();
	}
}