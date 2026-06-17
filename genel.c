#include "genel.h"
long emir(int num, long fd, long op1, long op2)
{
    register long x0 asm("x0")=fd;
    register long x1 asm("x1")=op1;
    register long x2 asm("x2")=op2;
    register long x8 asm("x8")=num;
    asm volatile("svc #0"::"r"(x0),"r"(x1),"r"(x2),"r"(x8):"memory");
    return x0;
}
