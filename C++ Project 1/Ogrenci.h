#ifndef OGRENCI_H
#define OGRENCI_H
#include "Kisi.h"

class Ogrenci : public Kisi
{
private:
	int vizeNot;
	int finalNot;

public:
	Ogrenci (int vize, int final);
	int getVize();
	int getFinal();
	double ortalamaHesapla();
	void durum();
};

#endif
