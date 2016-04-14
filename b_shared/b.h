#ifndef B_H
#define B_H

#ifdef B_SHARED_EXPORTS
#define API __declspec(dllexport)
#else
#define API __declspec(dllexport)
#endif

API void b();

#endif
