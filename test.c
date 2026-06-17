#include "trc.h"
int main()
{
    char inp[6];
    char ehuhg[6] = "ehuhg\n";
    yaz(1,"ehuhg\n",6);
    yaz(1,"input: ",7);
    oku(0,inp,6);
    if(karsilastir(inp, ehuhg) == 0)
    {
        yaz(1,"yeeeey\n",7);
    }
    emir(64,1,(long)"Ehe",3);
    beklesn(3,0);
    temizle();
    return 0;
}
