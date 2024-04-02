#pragma once
#include <iostream>

using namespace std;

class Otomobil
{
public:
	Otomobil(string _marka, string _renk, int _uretimYili, int _fiyat);
	void ruhsatBilgileriniGoster();
	void setOtomobilRenk(string _renk);
	string getOtomobilRenk();
	void setOtomobilMarka(string _marka);
	string getOtomobilMarka();
	void setOtomobilUretimYili(int _uretimYili);
	int getOtomobilUretimYili();
	void setOtomobilFiyat(int _fiyat);
	int getOtomobilFiyat();
private:
	int uretimYili;
	int fiyat;
	string renk;
	string marka;

};