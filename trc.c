#include "trc.h"
void beklesn(int num,int num1)
{
    emir(101,(long)(long[]){num,num1},0,0,0);
}
long dosya_ac(char *filename,long mode)
{
    return emir(56,-100,(long)filename,mode,0);
}
long dosya_oku(long fd,char buffer[],long len)
{
    return emir(63,fd,(long)buffer,len,0);
}
void dosya_kapat(long fd)
{
    emir(57,fd,0,0,0);
}
int karsilastir(char* str, char* str1)
{
    while(*str && *str1 && *str == *str1)
    {
        str++;
        str1++;
    }

    return *str - *str1;
}

long uzunluk_al(char *s)
{
    long uzunluk = 0;
    while(s[uzunluk] != '\0') uzunluk++;
    return uzunluk;
}

void yaz(long fd,char* str,long len)
{
    register long x0 asm("x0") = fd;
    register char *x1 asm("x1")=str;
    register long x2 asm("x2")=len;
    register long x8 asm("x8")=64;
    asm volatile("svc #0"::"r"(x0),"r"(x1),"r"(x2),"r"(x8):"memory");
}
void oku(long fd,char* str, long len)
{
    register long x0 asm("x0")=fd;
    register char *x1 asm("x1")=str;
    register long x2 asm("x2")=len;
    register long x8 asm("x8")=63;
    asm volatile("svc #0"::"r"(x0),"r"(x1),"r"(x2),"r"(x8):"memory");
}
void temizle()
{
    yaz(1,"\033[2J\033[H",7);
}
