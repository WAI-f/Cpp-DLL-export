#ifndef XYZ_H
#define XYZ_H

#ifdef XYZLIBRARY_EXPORTS
#define XYZAPI __declspec(dllexport)
#else
#define XYZAPI __declspec(dllimport)
#endif

#ifdef __cplusplus
#define EXTERN_C extern "C"
typedef struct tagXYZHANDLE{}*XYZHANDLE;
#else
#define EXTERN_C
#endif

EXTERN_C XYZAPI XYZHANDLE GetXyz();
EXTERN_C XYZAPI int XyzFoo(XYZHANDLE handle, int n);
EXTERN_C XYZAPI void XyzRelease(XYZHANDLE handle);

#endif