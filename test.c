#include "trc.h"
int main()
{
    char inp[10];
    char ehuhg[] = "ehuhg\n";
    long fd=dosya_ac("test.c",0);
    char buffer[1024];
    long count=dosya_oku(fd,buffer,1024);
    if(fd < 0)
    {
        yaz(1,"FD<0",4);
    }
    yaz(1,"ehuhg\n",6);
    yaz(1,"input: ",7);
    oku(0,inp,7);
    if(karsilastir(inp, ehuhg) == 0)
    {
        yaz(1,"yeeeey\n",7);
    }
    emir(64,1,(long)"Ehe",3,0);
    beklesn(3,0);
    temizle();
    yaz(1,buffer,count);
    dosya_kapat(fd);
    return 0;
}
