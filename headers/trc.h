#ifndef TRC_H
#define TRC_H

#include "genel.h"

void beklesn(int num, int num1);

int karsilastir(char* str, char* str1);
long uzunluk_al(char *s);

void yaz(long fd, char* str, long len);
void oku(long fd, char* str, long len);
long dosya_ac(char *filename, long mode);
long dosya_oku(long fd,char buffer[],long len);
void dosya_kapat(long fd);
void temizle();

#endif
