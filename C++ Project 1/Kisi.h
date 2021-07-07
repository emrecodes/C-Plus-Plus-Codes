#ifndef KISI_H
#define KISI_H
#include <string>

class Kisi
{
private:
	std::string ad;
	std::string soyad;
	int yas;
	std::string email;

public:
	// buraya Kisi(); koymadan �nce error: no matching function for call to �Kisi::Kisi()� hatas� ald�m.
	// �nternetteki �ngilizce kaynaklarda ara�t�rma yapt�ktan sonra birinin benim gibi hata ald���n� g�rd�m
	// O ki�iye yap�lan �neriler sonucu a�a��ya Kisi(); koymam gerekti�ini anlad�m ve sonras�nda program �al��t�
	// Anlad���m kadar�yla sorun default constructor'a sahip olmamamd�
	Kisi();
	Kisi(std::string ad1, std::string soyad1, int yas1, std::string email1);
	std::string getAd();
	std::string getSoyad();
	int getYas();
	std::string getEmail();
	void tamIsim();
	void yasAzalt();
	void yasArttir();
};

#endif
