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
	
	bilgi1.tamIsim(); //bilgi1'deki ad� ve soyad� birle�tirerek tam ismi ekrana yazar.
	std::cout << "Kisaltilmis ";
	bilgiYedek.tamIsim();
	std::cout << "E-mail Adresi: " << bilgi1.getEmail() << "\n";
	std::cout << "Yedek e-mail Adresi: " << bilgiYedek.getEmail() << "\n";
	
	std::cout << "----------- \n";
	std::cout << "BU DONEM: \n";
	std::cout << "Mevcut yasi: " << bilgi1.getYas() << "\n";
	std::cout << "Bu donemki not ortalamasi: " << ortaBuDonem << "\n";
	notlarBuDonem.durum(); //notlarBuDonem'de girilmi� vizenin %40'�n� ve finalin %60'�n� toplay�p, 55'ten k���kse kald� b�y�kse ge�ti yazar.
	std::cout << "----------- \n";
	
	std::cout << "ONCEKI DONEM: \n";
	bilgi1.yasAzalt(); //Ya� 1 azalt�ld� ve �nceki e�itim d�nemindeki ya�� olan 19'a getirildi.
	std::cout << "Gecen donemki yasi: " << bilgi1.getYas() << "\n";
	std::cout << "Gecen donemki not ortalamasi: " << ortaGecenDonem << "\n";
	notlarGecenDonem.durum();
	std::cout << "----------- \n";
	
	std::cout << "GELECEK DONEM: \n";
	bilgi1.yasArttir(); //Ya� 1 artt�r�ld� ve mevcut hali olan 20'ye getirildi. (��nk� daha �nce 28. sat�rda 1 azat�lm��t�)
	bilgi1.yasArttir(); //Ya� 1 kez daha artt�r�ld�, gelecek d�nemki ya� �imdi elde edildi.
	std::cout << "Gelecek donemde olacagi yas: " << bilgi1.getYas();
	
	return 0;
}
