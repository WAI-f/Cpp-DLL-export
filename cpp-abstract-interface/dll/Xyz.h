#ifndef XYZ_H
#define XYZ_H

#ifdef XYZLIBRARY_EXPORTS
#define XYZAPI __declspec(dllexport)
#else
#define XYZAPI __declspec(dllimport)
#endif

#ifdef __cplusplus

struct IXyz
{
	virtual int Foo(int n) = 0;
	virtual void Release() = 0;
};

extern "C" XYZAPI IXyz* GetXyz();

#endif

#endif