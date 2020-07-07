#ifndef XYZ_H
#define XYZ_H

#ifdef XYZLIBRARY_EXPORTS
#define XYZAPI __declspec(dllexport)
#else
#define XYZAPI __declspec(dllimport)
#endif

#ifdef __cplusplus

class XYZAPI CXyz
{
public:
	int Foo(int n);
};

#endif

#endif