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
	// buraya Kisi(); koymadan önce error: no matching function for call to ‘Kisi::Kisi()’ hatasý aldým.
	// Ýnternetteki Ýngilizce kaynaklarda araþtýrma yaptýktan sonra birinin benim gibi hata aldýðýný gördüm
	// O kiþiye yapýlan öneriler sonucu aþaðýya Kisi(); koymam gerektiðini anladým ve sonrasýnda program çalýþtý
	// Anladýðým kadarýyla sorun default constructor'a sahip olmamamdý
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
