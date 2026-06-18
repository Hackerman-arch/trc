#include <trc.h>
int main()
{
    long file=dosya_ac("example_io.c",0);
    char buffer[1024];
    long count=dosya_oku(file,buffer,1024);
    if(file < 0)
        yaz(1,"FD<0",4);
    yaz(1,buffer,count);
    return 0;
}
