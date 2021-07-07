#include "Ogrenci.h"
#include <iostream>

Ogrenci::Ogrenci(int vize, int final)
{
	vizeNot = vize;
	finalNot = final;
}

int Ogrenci::getVize()
{
    return vizeNot;
}

int Ogrenci::getFinal()
{
    return finalNot;
}

double Ogrenci::ortalamaHesapla()
{
    return (vizeNot*0.4 + finalNot*0.6);
}

void Ogrenci::durum()
{
	if ( ( (vizeNot*0.4 + finalNot*0.6) ) < 55 )
		std::cout << "Durum: " << "Kaldi \n";
    else
    	std::cout << "Durum: " << "Gecti \n";
}
