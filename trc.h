#ifndef TRC_H
#define TRC_H

#include "genel.h"

void beklesn(int num, int num1);

int karsilastir(char* str, char* str1);
long uzunluk_al(char *s);

void yaz(long fd, char* str, long len);
void oku(long fd, char* str, long len);
void temizle();

#endif
