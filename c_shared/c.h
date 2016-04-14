#ifndef C_H
#define C_H

#ifdef C_SHARED_EXPORTS
#define API __declspec(dllexport)
#else
#define API __declspec(dllexport)
#endif

API void c();

#endif
