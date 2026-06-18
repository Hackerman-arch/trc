# TRC(Turkish C) - Türkçe C v0.21b
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

NEW FEATURES/YENİ ÖZELLİKLER:

File management added.

Dosya yönetimi eklendi.

Portable library file added.

Taşınabilir kütüphane dosyası eklendi.

File system made more regular.

Dosya sistemi daha düzenli yapıldı.

Trash files has been deleted.

Çöp dosyalar silindi.

Makefile added.

Makefile eklendi.

Some small bugs are fixed.

Bazı ufak hatalar ayıklandı.

Examples added.

Örnekler eklendi.

-----------------------------

Features will be added in the next version/Sonraki versiyonda eklenecek özellikler:
Memory management.

Bellek yönetimi.

More file management functions.

Daha fazla dosya yönetimi fonksiyonları.