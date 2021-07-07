#include "Kisi.h"
#include <string>
#include <iostream>

//Kisi.h kısmında anlattığım gibi, buraya da Kisi::Kisi(){} ekledikten sonra çalıştı. (Yine aynı araştırma sonucu)

Kisi::Kisi(){}
Kisi::Kisi(std::string ad1, std::string soyad1, int yas1, std::string email1)
{
	ad = ad1;
	soyad = soyad1;
	yas = yas1;
	email = email1;
}

std::string Kisi::getAd()
{
	return ad;
}

std::string Kisi::getSoyad()
{
	return soyad;
}

int Kisi::getYas()
{
	return yas;
}

std::string Kisi::getEmail()
{
	return email;
}

void Kisi::tamIsim()
{
	std::cout << "Ad ve Soyad: " << ad + " " + soyad + "\n";
}

void Kisi::yasAzalt()
{
	std::cout << "Yas 1 azaltildi \n";
	yas -= 1;
}

void Kisi::yasArttir()
{
	std::cout << "Yas 1 arttirildi \n";
	yas += 1;
}
