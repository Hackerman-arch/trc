#include <trc.h>
int main()
{
    char success[]="io test successful.\n";
    char inputbuffer[64];
    long len=uzunluk_al(success);
    yaz(1,success,len);
    oku(0,inputbuffer,64);
    return 0;
}
