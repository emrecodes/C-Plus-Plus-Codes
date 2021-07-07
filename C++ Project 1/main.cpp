#include <iostream>
#include "Kisi.h"
#include "Ogrenci.h"

int main()
{
	Kisi bilgi1("Emre", "Codes", 20, "218emre@baskent.edu.tr");
	Kisi bilgiYedek("Emre", "Codes", 20, "emrecodes@baskent.edu.tr");
	Ogrenci notlarBuDonem(87, 80);
	Ogrenci notlarGecenDonem(55, 45);
	double ortaBuDonem = notlarBuDonem.ortalamaHesapla();
	double ortaGecenDonem = notlarGecenDonem.ortalamaHesapla();
	
	bilgi1.tamIsim(); //bilgi1'deki adý ve soyadý birleþtirerek tam ismi ekrana yazar.
	std::cout << "Kisaltilmis ";
	bilgiYedek.tamIsim();
	std::cout << "E-mail Adresi: " << bilgi1.getEmail() << "\n";
	std::cout << "Yedek e-mail Adresi: " << bilgiYedek.getEmail() << "\n";
	
	std::cout << "----------- \n";
	std::cout << "BU DONEM: \n";
	std::cout << "Mevcut yasi: " << bilgi1.getYas() << "\n";
	std::cout << "Bu donemki not ortalamasi: " << ortaBuDonem << "\n";
	notlarBuDonem.durum(); //notlarBuDonem'de girilmiþ vizenin %40'ýný ve finalin %60'ýný toplayýp, 55'ten küçükse kaldý büyükse geçti yazar.
	std::cout << "----------- \n";
	
	std::cout << "ONCEKI DONEM: \n";
	bilgi1.yasAzalt(); //Yaþ 1 azaltýldý ve önceki eðitim dönemindeki yaþý olan 19'a getirildi.
	std::cout << "Gecen donemki yasi: " << bilgi1.getYas() << "\n";
	std::cout << "Gecen donemki not ortalamasi: " << ortaGecenDonem << "\n";
	notlarGecenDonem.durum();
	std::cout << "----------- \n";
	
	std::cout << "GELECEK DONEM: \n";
	bilgi1.yasArttir(); //Yaþ 1 arttýrýldý ve mevcut hali olan 20'ye getirildi. (Çünkü daha önce 28. satýrda 1 azatýlmýþtý)
	bilgi1.yasArttir(); //Yaþ 1 kez daha arttýrýldý, gelecek dönemki yaþ þimdi elde edildi.
	std::cout << "Gelecek donemde olacagi yas: " << bilgi1.getYas();
	
	return 0;
}
