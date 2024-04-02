#include "otomobil.h"

Otomobil::Otomobil(string _marka,string _renk, int _uretimYili, int _fiyat ) {
	marka = _marka;
	renk = _renk;
	uretimYili = _uretimYili;
	fiyat = _fiyat;
}

void Otomobil::ruhsatBilgileriniGoster() {
	cout << "Marka: " << Otomobil::marka << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Uretim yili: " << Otomobil::uretimYili << endl;
	cout << "Fiyat: " << Otomobil::fiyat << endl;
}

void Otomobil::setOtomobilRenk(string _renk) {
	renk = _renk;
}

string Otomobil::getOtomobilRenk() {
	return renk;
}

void Otomobil::setOtomobilMarka(string _marka) {
	marka = _marka;
}
string Otomobil::getOtomobilMarka() {
	return marka;
}
void Otomobil::setOtomobilUretimYili(int _uretimYili) {
	uretimYili = _uretimYili;
}
int Otomobil::getOtomobilUretimYili() {
	return uretimYili;
}
void Otomobil::setOtomobilFiyat(int _fiyat) {
	fiyat = _fiyat;
}
int Otomobil::getOtomobilFiyat() {
	return fiyat;
}