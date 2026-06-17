# TRC(Turkish C) - Türkçe C v0.1b
Türkçe C kütüphanesi, standart C lib fonksiyonlarının Türkçeleştirilmiş hâllerini içerir.
Turkish C library contains Turkish forms of standart C lib functions.

Derle/Compile: clang filename.c trc.c genel.c -o filename

This library is only for ARM64 Linux machines.
Bu kütüphane sadece ARM64 Linux makineleri içindir.
Library doesn't use standart C libraries and uses system calls in it's own functions.
Kütüphane standart C kütüphanelerini kullanmıyor ve kendi fonksiyonları içinde sistem çağrılarını kullanıyor.

License/Lisans: GNU GPL v3

Örnek program/Example program:

#include "trc.c"
int main()
{
    yaz(1,"Merhaba!\n",8);
    return 0;
}
