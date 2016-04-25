#include <stdio.h>
#include "c.h"
#include "a.h"

API void c()
{
    a();
    printf("c()\n");
}