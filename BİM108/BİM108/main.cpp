#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "otomobil.h"

using namespace std;
/*
int main() {
	const int boyut = 5;
	int dizi[boyut];
	for (int i = 0; i < boyut; i++)
	{
		cout << "Dizinin " << i + 1 << ". elemanini giriniz: ";
		cin >> dizi[i];
	}
	int max = dizi[0], min = dizi[0];
	for (int j = 0; j < boyut; j++)
	{
		if (min > dizi[j])
		{
			min = dizi[j];
		}
		if (max < dizi[j])
		{
			max = dizi[j];

		}
	}
	cout << "Girdiginiz en buyuk sayi = " << max << endl;
	cout << "Girdiginiz en kucuk sayi = " << min << endl;

	if (min%2 == 0)
	{
		cout << "En kucuk sayiniz cift" << endl;
	}
	else
	{
		cout << "En kucuk sayiniz tek" << endl;

	}
	if (max%2==0)
	{
		cout << "En buyuk sayiniz cift" << endl;
	}
	else
	{
		cout << "En buyuk sayiniz tek" << endl;
	}
	return 0;
}*/
/*
int main() {
	const int boyut = 5;
	int dizi[boyut], tekTop = 0, ciftTop = 0;
	for (int i = 0; i < boyut; i++)
	{
		cout << "Dizinin " << i + 1 << ". elemanini giriniz: ";
		cin >> dizi[i];
		if (dizi[i] % 2 == 0) {
			ciftTop += dizi[i];
		}
		else
		{
			tekTop += dizi[i];
		}
	}
	cout << "Girdiginiz tek sayilarin toplami = " << tekTop << endl;
	cout << "Girdiginiz cift sayilarin toplami = " << ciftTop << endl;
	return 0;
}*/
/*
int main() {
	int sayi = 0;
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 6; j++) {
			cout << sayi + 1 << "\t";
			sayi++;
		}
		cout << endl;
	}
	return 0;
}*/
/*
int main() {
	char dizi[11] = "Edirne";
	for (int i = 6; i >= 0; i--)
	{
		cout << dizi[i];
	}
}*/
/*
void toplam() {
	float sayi1, sayi2;
	cout << "Toplanmasini istediginiz 2 sayiyi giriniz: ";
	cin >> sayi1;
	cin >> sayi2;
	cout << "Sonucunuz = " << sayi1 + sayi2;
}

double toplam2(double sayi1, double sayi2) {
	return sayi1 + sayi2;
}

int main() {
	// toplam();
	double sayi1, sayi2;
	cout << "Toplanmasini istediginiz 2 sayiyi giriniz: ";
	cin >> sayi1;
	cin >> sayi2;
	cout << "Sonucunuz = " << toplam2(sayi1, sayi2);
	return 0;
}*/
/*
void maas() {
	string isim;
	bool es, cocuk;
	double maas;
	cout << "Ismizi giriniz: ";
	cin >> isim;
	cout << "Evli misiniz?\n(evetse 1, hayirsa 0 tuslayiniz)";
	cin >> es;
	cout << "Cocugunuz var mi?\n(evetse 1, hayirsa 0 tuslayiniz)";
	cin >> cocuk;
	cout << "Maasinizi giriniz: ";
	cin >> maas;
	if (es == 1)
	{
		maas += 5000;
	}
	if (cocuk == 1)
	{
		maas += 2500;
	}
	if (maas >= 10000)
	{
		maas *=  0.9;
	}
	cout << "Maasiniz " << maas  << " liradir " << isim << endl;
	return;
}

int main() {
	
	maas();
	return 0;
}*/
/*
double kareAlan(double kenar) {
	return kenar * kenar;
}

double dikdortgenAlan(double en, double boy) {

	return en * boy;
}

double daireAlan(double yaricap) {
	
	return 3.14 * yaricap * yaricap;
}

int main() {
	double kenar, en, boy, yaricap;
	cout << "Kare kenarini giriniz: \n";
	cin >> kenar;
	cout << "Dikrotgen en ve voyunu giriniz: \n";
	cin >> en >> boy;
	cout << "Dairenin yari capini giriniz: \n";
	cin >> yaricap;

	cout << "\n\n\tKare\tDikdortgen\tDaire\n";
	cout << "Alan \t" << kareAlan(kenar) << "\t" << dikdortgenAlan(en, boy) << "\t\t" << daireAlan(yaricap) << endl;
	return 0;
}*/
/*
void diziYaz(int dizi[], int boyut) {
	for (int i = 0; i < boyut; i++)
	{
		cout << dizi[i] << " ";
	}
	cout << endl;
}

int main() {
	int dizi[6] = {};
	diziYaz(dizi, 6);
	int dizi2[] = { 2, 4, 6, 8 };
	diziYaz(dizi2, 4);
	return 0;
}*/
/*
void diziKatla(int dizi[]) {
	cout << "Dizinizin ilk hali:\n";
	for (int i = 0; i < 8; i++)
	{
		cout << dizi[i] << "\t";
	}
	cout << "\nDizinizin son hali:\n";
	for (int i = 0; i < 8; i++)
	{
		cout << dizi[i] * 2 << "\t";
	}
}

int main() {
	int dizi[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	diziKatla(dizi);
}*/
/*
void yazdir(double dizi[], double boyut) {
	for (int i = 0; i < boyut; i++)
	{
		cout << "Dizinin " << i + 1 << ". elemanini giriniz: ";
		cin >> dizi[i];
	}
	for (int i = 0; i < boyut; i++)
	{
		cout << dizi[i] << "\t";
	}
	cout << "\n";
}

int main() {
	int boyut;
	cout << "Dizinizin boyutunu giriniz: ";
	cin >> boyut;
	double* dizi = new double[boyut];
	yazdir(dizi, boyut);
	return 0;
}*/
/*
void matrisYazdir(int matris[][2]) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++) {

			cout << matris[i][j] << "\t";

		}
		cout << endl;
	}
}



int main() {
	int matris[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++) {
			cout << "Matrisin " << i << ". satir " << j << ". sutun elemanini giriniz : ";
			cin >> matris[i][j];

		}
	}
	matrisYazdir(matris);
}*/
/*
void tersCevirme(int dizi[], int boyut) {
	int temp; 
	cout << "Ilk dizi" << endl;
	for (int i = 0; i < boyut; i++)
	{
		cout << dizi[i] << "\t";
	}
	for (int i = 0; i < boyut/2; i++)
	{
		temp = dizi[i];
		dizi[i] = dizi[boyut -1- i];
		dizi[boyut -1- i] = temp;
	}
	cout << "\nSon dizi" << endl;
	for (int i = 0; i < boyut; i++)
	{
		cout << dizi[i] << "\t";
	}
}

int main() {
	int boyut = 6;
	int dizi[] = { 0, 1, 2, 3, 4, 5 };
	tersCevirme(dizi, boyut);
	return 0;
}*/
/*
void yaz(int sayi) {
	cout << sayi<< endl;
}

void yaz(string mesaj) {
	cout << mesaj << endl;
}

void yaz(int sayi, string mesaj) {
	cout << sayi << " " << mesaj << endl;
}

int main() {
	yaz("Yusuf");
	yaz(20);
	yaz(20, "Yusuf");
	return 0;
}*/
/*
int topla(int sayi1, int sayi2) {
	return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2) {
	return sayi1 + sayi2;
}
int main() {
	cout << topla(5, 7) << " " << topla(7.2, 9.6);
	return 0;
}*/
/*
class Sayi
{
public:
	double sayi1, sayi2;
	double kareToplam() {
		return pow(sayi1, 2) + pow(sayi2, 2);
	}
	double kupToplam() {
		return pow(sayi1, 3) + pow(sayi2, 3);
	}
};

int main() {
	Sayi sayi;
	int secim;
	cout << "Sayilarinizi giriniz:\n ";
	cin >> sayi.sayi1 >> sayi.sayi2;
	do
	{
		cout << "Islem turunu belirleyin:(1 kare toplam, 2 kup toplam)\n";
		cin >> secim;
		if (secim == 1)
		{
			cout << sayi.kareToplam() << endl;

		}
		else if (secim == 2)
		{
			cout << sayi.kupToplam() << endl;
		}

	} while (secim!=1 && secim != 2);
	return 0;
}*/
/*
class Sayi
{
public:
	double sayi1, sayi2;
	double alan() {
		return sayi1* sayi2;
	}
	double cevre() {
		return 2 * (sayi1 + sayi2);
	}
};

int main() {
	Sayi sayi;
	int secim;
	cout << "Kenar degerlerinizi giriniz:\n ";
	cin >> sayi.sayi1 >> sayi.sayi2;
	do
	{
		cout << "Islem turunu belirleyin:(1 alan, 2 cevre)\n";
		cin >> secim;
		if (secim == 1)
		{
			cout << sayi.alan() << endl;

		}
		else if (secim == 2)
		{
			cout << sayi.cevre() << endl;
		}

	} while (secim != 1 && secim != 2);
	return 0;
}
*/
/*
int main() {
	Otomobil otomobil1("Audi", "Mor", 2020, 3000000);
	otomobil1.setOtomobilRenk("Koyu Mor");
	otomobil1.ruhsatBilgileriniGoster();
	cout << endl << endl;
	cout << endl << endl;
}*/
/*
int main() {
	int sayi = 7;
	cout << sayi << endl; // sayi degiskenindeki degeri yazar
	cout << &sayi << endl;  // sayi degiskeninin adresini yazar
	int* adres = &sayi; // adresi pointera atar
	cout << adres << endl;  // adresi yazdirir
	cout << *adres << endl;  // adresin icerigini yazdirir
	*adres = 8;	// adresin tutugu degeri degistirir
	cout << *adres << endl;
	return 0;
}*/
/*
int main() {
	int dizi[] = { 10,50,20,45 };
	int* pr = dizi;
	for (int i = 0; i < 4; i++)
	{
		cout << "Dizi[" << i << "]; " << pr << endl;
		cout << "Dizi[" << i << "]; " << *pr << endl << endl;
		pr++;
	}
	return 0;
}*/
/*
class Personel
{
public:
	string personelAdi, personelSoyadi;
	int personelYasi;
	void goruntule(string personelAdi, string personelSoyadi, int personelYasi) {
		this->personelAdi = personelAdi;
		this->personelSoyadi = personelSoyadi;
		this->personelYasi = personelYasi;
		cout << personelAdi << " " << personelSoyadi << " " << personelYasi << endl;
	}

};

int main() {
	Personel personel1, personel2, personel3;
	personel1.goruntule("Yusuf", "Recepoglu", 20);
	personel2.goruntule("Yusuf", "Recepoglu", 20);
	personel3.goruntule("Yusuf", "Recepoglu", 20);

}*/
/*
class Alan
{
public:
	double pi, r;
	Alan() {
		pi = 3.14;
		r = 5;
	}
	Alan(double pi, double r) {
		this -> pi;
		this -> r;
	}
	
	~Alan() {

	}

	double DaireAlan() {
		return pi * r * r;
	}
};


int main() {

	double x, y;
	cin >> x >> y;
	Alan daire1;
	Alan daire2(x, y);
	cout << daire1.DaireAlan() << endl;
	cout << daire2.DaireAlan() << endl;
	return 0;
}*/
/*
class Arac
{
public:
	string renk, model, yakitTuru;
	int kapiSayisi, uretimYili, hiz, azamiHiz;
	bool durum = false;
private:
	double fiyat;

	void yazdir(string renk, string model, double fiyat) {
		this->renk = renk;
		this->model = model;
		this->fiyat = fiyat;

		cout << renk << " " << model << " " << fiyat << " " << durum;
	}
};

class Otomoil : public Arac {

}otomobil1;

class Kamyon : public Arac {

}kamyon1;

int main() {
	
}*/
/*
int main()
{
	char dizi[7] = "edirne";
	for (int i = 6; i >= 0; i--)
	{
		cout << dizi[i];
	}

}*/

/*
class Dikdortgen
{
private:
	int kisaKenar, uzunKenar;

public:
	void setGiris(int kisaKenar, int uzunKenar)
	{
		this->kisaKenar = kisaKenar;
		this->uzunKenar = uzunKenar;
	}
	int getAlanHesapla() {
		return kisaKenar * uzunKenar;
	}
};


int main() {
	int sayi1, sayi2;
	Dikdortgen d1;
	cout << "Kisa kenari giriniz: ";
	cin >> sayi1;
	cout << "Uzun kenari giriniz: ";
	cin >> sayi2;
	d1.setGiris(sayi1, sayi2);
	cout << "Alan = " << d1.getAlanHesapla();
	return 0;
}*/
/*
class Sandalye
{
private:
	int alinanAdet, fiyat = 1000;
	double kdv = 0.18;

public:
	
	void setAdet(int alinanAdet) {
		this->alinanAdet = alinanAdet;
	}
	double getToplamFiyat() {
		return alinanAdet * (fiyat * kdv + fiyat);
	}

};

int main() {
	int adet;
	cout << "Alacaginiz sandalye adedini giriniz: ";
	cin >> adet;
	Sandalye sip1;
	sip1.setAdet(adet);
	cout << "Siparis tutari = " << sip1.getToplamFiyat() << endl;
	return 0;
}*/
/*
class Kitaplýk
{
private:
	string yazar, kitapIsmi;

public: 
	void setBilgiGiris(string yazar, string kitapIsmi) {
		this->kitapIsmi = kitapIsmi;
		this->yazar = yazar;
	}
	void getBilgicikis() {
		cout << "Yazar: " << yazar << "\nKitap ismi: " << kitapIsmi << endl;
	}
};

int main() {
	string yazar, kitapIsmi;
	cout << "Yazar adini giriniz; \n";
	cin >> yazar;
	cout << "Kitap adini giriniz; \n";
	cin >> kitapIsmi;
	Kitaplýk kitap1;
	kitap1.setBilgiGiris(yazar, kitapIsmi);
	kitap1.getBilgicikis();
	return 0;
}
*/
/*
class ATM
{
protected:
	double bakiye, tutar;
	int islem;
public:
	ATM() {
		bakiye = 1000;
	}
	void bakiyeGoruntuleme() {
		cout << "Bakiyeniz: \t" << bakiye << endl;
	}
	void paraYatirma() {
		cout << "Yatirmak istediginiz miktari giriniz: \t";
		cin >> tutar;
		bakiye += tutar;
		cout << "Bakiyeniz: \t" << bakiye << endl;
	}
	void paraCekme() {
		cout << "Cekmek istediginiz miktari giriniz: \t";
		cin >> tutar;
		while (bakiye<tutar)
		{
			cout << "Yetersiz bakiye!!!\tCekmek istediginiz miktari giriniz: \t";
			cin >> tutar;
		}
		bakiye -= tutar;
		cout << "Bakiyeniz: \t" << bakiye << endl;
	}
}hesap1;

int main() {
	int secim;
	hesap1.bakiyeGoruntuleme();
	hesap1.paraCekme();
	do
	{
		cout << "*** Islemler ***\n1-) Para Yatirma\n2-) Para Cekme\n3-) Bakiye Goruntule\n4-) Kart Iade\n\n\n";
		cout << "Yapmak istediginiz islemi seciniz:\t";
		cin >> secim;
		switch (secim)
		{
		case(1): {
			hesap1.paraYatirma();
			break;
		}
		case(2): {
			hesap1.paraCekme();
			break;
		}
		case(3): {
			hesap1.bakiyeGoruntuleme();
			break;
		}

		case (4):
			cout << "Kartiniz iade ediliyor." << endl;
			break;

		default:
			cout << "Gecersiz deger!!!" << endl;
			break;
		}
	} while (secim!=4);
	return 0;
}*/
///teknoloji,tekstil, gýda
/*
class Urun
{
protected:
	string urunAdi;
	double fiyat, kdv;
public:
	Urun() : urunAdi(""), fiyat(0.0), kdv(0.0) {}
	Urun(string urunAdi, double fiyat) : urunAdi(urunAdi), fiyat(fiyat) {
		kdv = 0;
	}
	virtual void KDV() {
		cout << "Urun fiyatlarina KDV dahildir!\n";

		cout << "Toplam tutar =\t" << fiyat << endl << endl;
	}
};

class Teknoloji : public Urun
{
private:
	string urunMarkasi, urunModeli;
public:
	Teknoloji() : Urun(), urunMarkasi(""), urunModeli("") {}
	Teknoloji(string urunAdi, double fiyat, string urunMarkasi, string urunModeli) :Urun (urunAdi, fiyat), urunMarkasi(urunMarkasi), urunModeli(urunModeli) {
	}
	
	void KDV() override{
		cout << "Urun fiyatlarina KDV dahildir!\nUrun 'Teknoloji' sininifindadir!!\n";
		kdv = 0.2;
		fiyat = fiyat + (fiyat * kdv);
		cout << "Urun adi: " << urunAdi << "\tUrun markasi: " << urunMarkasi << "\tUrun modeli: " << urunModeli << endl;
		cout << "Toplam tutar =\t" << fiyat << endl << endl;
	}

};

class Tekstil : public Urun
{
private:
	string urunBedeni, urunTuru;
public:
	Tekstil() : Urun(), urunBedeni(""), urunTuru("") {}
	Tekstil(string urunAdi, double fiyat, string urunBedeni, string urunTuru) : Urun (urunAdi, fiyat), urunTuru(urunTuru), urunBedeni(urunBedeni) {
	}
	void KDV() override {
		cout << "Urun fiyatlarina KDV dahildir!\nUrun 'Tekstil' sininifindadir!!\n";
		kdv = 0.18;
		fiyat = fiyat + (fiyat * kdv);
		cout << "Urun adi: " << urunAdi << "\tUrun turu: " << urunTuru << "\tUrun bedeni: " << urunBedeni << endl;
		cout << "Toplam tutar =\t" << fiyat << endl << endl;
	}

};

class Gida : public Urun
{
private:
	string urunTuru;
	double urunGramaji;
public:
	Gida() : Urun(), urunGramaji(0.0), urunTuru("") {}
	Gida(string urunAdi, double fiyat, double _urunGramaji, string urunTuru)
		: Urun(urunAdi, fiyat), urunGramaji(urunGramaji), urunTuru(urunTuru) {}
	void KDV() override {
		cout << "Urun fiyatlarina KDV dahildir!\nUrun 'Gida' sininifindadir!!\n";
		kdv = 0.05;
		fiyat = fiyat + (fiyat * kdv);
		cout << "Urun adi: " << urunAdi << "\tUrun turu: " << urunTuru << "\tUrun gramaji: " << urunGramaji << endl;

		cout << "Toplam tutar =\t" << fiyat << endl << endl;
	}

};

int main() {
	int secim1, secim2;
	string urunAdi, urunMarkasi, urunModeli, urunBedeni, urunTuru;
	double fiyat, urunGramaji;
	Teknoloji urun1("Bos", 0, "Bos", "Bos");
	Tekstil urun2("Bos", 0, "Bos", "Bos");
	Gida urun3("Bos", 0, 0, "Bos");
	
	while (1)
	{
		cout << "Hos geldiniz!!\nHangi katagoride islem yapmak istersiniz?\n1-) Teknoloji\t2-) Tekstil\t3-) Gida\t4-) Cikis\n";
		cin >> secim1;
		if (secim1 == 4) break;
		cin.ignore();
		switch (secim1)
		{
		case 1:
			cout << "1-) Urun giris\t2-) Urun sorgulama\n";
			cin >> secim2;
			cin.ignore();
			system("cls");
			switch (secim2)
			{
			case 1:
				cout << "Urun adini giriniz:\t";
				getline(cin, urunAdi);
				cin.ignore();
                cout << "Urun fiyatini giriniz:\t";
                cin >> fiyat;
                cin.ignore();
                cout << "Urun markasini giriniz:\t";
				getline(cin, urunMarkasi);
				cin.ignore();
                cout << "Urun modelini giriniz:\t";
				getline(cin, urunModeli);
				cin.ignore();
                urun1 = Teknoloji(urunAdi, fiyat, urunMarkasi, urunModeli);
				system("cls"); 
                break;
			case 2:
				urun1.KDV();
				system("pause");
				system("cls");
				break;
			default:
				cout << "Gecersiz deger girisi!!!\n";
				break;
			}
			break;

		case 2:
			cout << "1-) Urun giris\t2-) Urun sorgulama\n";
			cin >> secim2;
			cin.ignore();
			switch (secim2)
			{
			case 1:
				cout << "Urun adini giriniz:\t";
				getline(cin, urunAdi);
				cin.ignore();
				cout << "Urun fiyatini giriniz:\t";
				cin >> fiyat;
				cin.ignore();
				cout << "Urun bedenini giriniz:\t";
				getline(cin, urunBedeni);
				cin.ignore();
				cout << "Urun turunu giriniz:\t";
				getline(cin, urunTuru);
				cin.ignore();
				urun2 = Tekstil(urunAdi, fiyat, urunBedeni, urunTuru);
				system("cls"); 
				break;
			case 2:
				urun2.KDV();
				system("pause");
				system("cls");
				break;
			default:
				cout << "Gecersiz deger girisi!!!\n";
				break;
			}
			break;

		case 3:
			cout << "1-) Urun giris\t2-) Urun sorgulama\n";
			cin >> secim2;
			cin.ignore();
			switch (secim2)
			{
			case 1:
				cout << "Urun adini giriniz:\t";
				getline(cin, urunAdi);
				cin.ignore();
				cout << "Urun fiyatini giriniz:\t";
				cin >> fiyat;
				cin.ignore();
				cout << "Urun gramajini giriniz:\t";
				cin >> urunGramaji;
				cin.ignore();
				cout << "Urun turunu giriniz:\t";
				getline(cin, urunTuru);
				cin.ignore();
				urun3 = Gida(urunAdi, fiyat, urunGramaji, urunTuru);
				system("cls"); 
				break;
			case 2:
				urun3.KDV();
				system("pause");
				system("cls");
				break;
			default:
				cout << "Gecersiz deger girisi!!!\n";
				break;
			}
			break;
		default:
			cout << "Gecersiz deger girisi!!!\n";
			break;
		}
	}

	return 0;
}*/
// otopark
/*	Teknoloji urun4( "Telefon", 100,"Apple", "Iphon 15 Pro Max");
	urun4.KDV(); 
	Tekstil urun5("Kiyafet",100,"34-35","Kazak");
	urun5.KDV(); 
	Gida urun6( "Gullac", 100, 0.250,"Tatli");
	urun6.KDV(); 
*/
//örnek kod
/*
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <ctime>
#include <string.h>
#define MAX 100
using namespace std;

class arac {
public:
	string plaka;
	string kisi_ad, kisi_soyad, kisi_tel;
	time_t giris;
}araba[MAX];
class otopark {
public:
	string gorevli_id, gorevli_sifre;
	int i, gelir;
	otopark(string id, string s) {
		gorevli_id = id;
		gorevli_sifre = s;
		gelir = 0;
		i = -1;
	}
	void menu() {
		int secim;
		cout << "OTOPARK PROGRAMI" << endl;
		cout << "----------------" << endl;
		cout << "1.Yeni arac" << endl;
		cout << "2.Arac cikisi" << endl;
		cout << "3.Arac listele" << endl;
		cout << "4.Rapor" << endl;
		cout << "5.Musteri bilgi" << endl;
		cout << "6.Cikis" << endl;
		secim = _getch();
		switch (secim)
		{
		case '1':yeni();
			break;
		case '2':cikar();
			break;
		case '3': listele();
			break;
		case '4':rapor();
			break;
		case '5':bilgi();
			break;
		case '6':exit(0);
			break;
		default:
			cout << "hatali secim !" << endl;
			break;
		}
	}
	void yeni() {
		system("cls");
		i++;
		cout << "Aracin sahibinin adi : ";
		cin >> araba[i].kisi_ad;
		cout << "Aracin sahibinin soyadi : ";
		cin >> araba[i].kisi_soyad;
		cout << "Aracin sahibinin telefonu : ";
		cin >> araba[i].kisi_tel;
		cout << "Aracin plakasi : ";
		cin >> araba[i].plaka;
		cout << "Islem basarili . " << endl;
		time(&araba[i].giris);
		system("pause");
		system("cls");		//kullanici 1 tusa bastiginda konsol temizlenir..
		menu();
	}
	void cikar() {
		system("cls");
		int j = 0, k, saat;
		double sure = 0;
		time_t cikis;
		string plka;
		time(&cikis);
		cout << "plaka girin : ";
		cin >> plka;
		for (int o = 0; o < 100; o++) {
			if (plka == araba[o].plaka) {
				sure = difftime(cikis, araba[o].giris);
				for (k = o; k <= i; k++) {
					araba[k] = araba[k + 1];
				}
				cout << "cikarma islemi basarili." << endl;
				i--;
				sure = sure / 3600;
				saat = ceil(sure);
				cout << "Ucret = " << saat * 5 << " TL" << endl;
				gelir += saat * 5;
				system("pause");
				system("cls");
				menu();
			}
			else continue;
			if (plka != araba[o].plaka) {
				cout << "Plaka bulunamadi !" << endl;
				system("pause");
				system("cls");
				menu();
			}
		}
	}
	void listele() {
		system("cls");
		for (int j = 0; j <= 10; j++) {
			if (araba[j].plaka != "") {
				cout << araba[j].plaka << endl;
			}
		}
		system("pause");
		system("cls");
		menu();
	}
	void rapor() {
		system("cls");
		cout << "Suanki gelir : " << gelir << endl;
		system("pause");
		system("cls");
		menu();
	}
	void bilgi() {
		system("cls");
		for (int a = 0; a < 100; a++) {
			if (araba[a].kisi_ad != "") {
				cout << "Musteri adi : " << araba[a].kisi_ad << endl;
				cout << "Musteri soyadi : " << araba[a].kisi_soyad << endl;
				cout << "Musteri telefonu : " << araba[a].kisi_tel << endl;
				cout << "Musteri plaka : " << araba[a].plaka << endl;
				cout << "------------------------------- " << endl;
			}
			else continue;
		}
		system("pause");
		system("cls");
		menu();
	}
};
int main() {
	otopark calisan("admin", "b1b3");
	string ad, sifre;
	int i = 0;
	cout << "OTOPARK PROGRAMI" << endl;
	while (true)
	{
		cout << "Kullanici adi giriniz : ";
		cin >> ad;
		cout << "Sifre giriniz : ";
		cin >> sifre;
		if (calisan.gorevli_id == ad) {
			if (calisan.gorevli_sifre == sifre) {
				cout << "Sifre dogru yonlendiriliyorsunuz . " << endl;
				break;
			}
		}
		else {
			cout << "Hatali giris . " << endl;
		}
		system("pause");
		system("cls");
	}
	system("pause");
	system("cls");
	calisan.menu();

}
*/

class Arac
{
public:
	string kisi_ad, kisi_soyad, kisi_tel, plaka;
	time_t giris;
	void yazdir() {
		cout << "Kisi adi:\t\t" << kisi_ad << "\nKisi soyadi:\t\t" << kisi_soyad << "\nArac plakasi:\t\t" << plaka << "\nIletisim numarasi:\t" << kisi_tel << endl << endl << endl;
	}
}arac[10];

class Otopark
{
public:
	string gorevli_id, gorevli_sifre;
	int i = 0, gelir = 0, secim, kullanim_sayisi = 0, otoparkdaki_arac_sayisi = 0;
	Otopark(string gorevli_id, string gorevli_sifre) : gorevli_id(gorevli_id), gorevli_sifre(gorevli_sifre){}

	void menu() {
		while (true)
		{
			cout << "OTOPARK MENU\n";
			cout << "------------\n1-) Yeni arac girisi\n2-) Arac cikis\n3-) Arac listesi\n4-) Otopark gelir raporu\n5-) Cikis\n------------\n";
			cin >> secim;
			system("cls");
			switch (secim)
			{
			case 1 :
				if (otoparkdaki_arac_sayisi == 10)
				{
					cout << "!!!***OTOPARK DOLU***!!!\n\n\n";
					break;
				}
				yeniGiris();
				break;
			case 2 :
				cikis();
				break;
			case 3: 
				liste();
				break;
			case 4:
				rapor();
				break;
			case 5:
				exit(0);
				break;
			default:
				cout << "Gecersiz deger!!!\n";
				break;
			}
		}
		
	}

	void yeniGiris() {
		cin.ignore();
	        cout << "Arac sahibinin adi:\t\t\t";
	        getline(cin, arac[i].kisi_ad);
	        cout << "Arac sahibinin soyadi:\t\t\t";
	        getline(cin, arac[i].kisi_soyad);
	        cout << "Arac sahibinin iletisim numarasi:\t";
	        getline(cin, arac[i].kisi_tel);
	        cout << "Arac plakasi:\t\t\t\t";
	        getline(cin, arac[i].plaka);
	        cout << endl;
		
		kullanim_sayisi++;
		otoparkdaki_arac_sayisi++;

		time_t currentTime=0;
		time(&currentTime);
		arac[i].giris = currentTime;

		char buffer[26];
		ctime_s(buffer, sizeof(buffer), &arac[i].giris);
		cout << "Giris zamani: " << buffer;

		i++;
		system("pause");
		system("cls");
	}
	void cikis() {
		system("cls");
		int j = 0, k, saat;
		double sure = 0;
		time_t cikis;
		string plka;
		time(&cikis);
		cout << "plaka girin : ";
		cin >> plka;
		for (int o = 0; o < 10; o++) {
			if (plka == arac[o].plaka) {
				sure = difftime(cikis, arac[o].giris);
				for (k = o; k <= i; k++) {
					arac[k] = arac[k + 1];
				}
				cout << "Cikarma islemi basarili." << endl;
				i--;
				sure = sure / 3600;
				saat = ceil(sure);
				cout << "Ucret = " << saat * 5 << " TL" << endl;
				gelir += saat * 5;
				otoparkdaki_arac_sayisi--;
				system("pause");
				system("cls");
				menu();
			}
			else if (plka != arac[o].plaka) {
					cout << "Plaka bulunamadi !" << endl;
					system("pause");
					system("cls");
					menu();
			}
		}
	}
	void liste() {
		for (int i = 0; i < 10; i++)
		{
			if (arac[i].plaka != "")
			{
				arac[i].yazdir();
			}
		}
		system("pause");
		system("cls");
	}
	void rapor() {
		cout << "OTOPARK GELIR RAPORU\n\nToplam kullanim sayisi:\t" << kullanim_sayisi << "\nToplam gelir:\t\t" << gelir << "\nAktif arac sayisi:\t" << otoparkdaki_arac_sayisi << endl << endl;
		system("pause");
		system("cls");
	}
};


void gizliGiris(string& giris) {
	char ch;
	while ((ch = _getch()) != 13) { // 13 ASCII kodu Enter tuþudur.
		if (ch == 8) { // 8 ASCII kodu Backspace tuþudur.
			if (!giris.empty()) {
				cout << "\b \b";
				giris.pop_back();
			}
		}
		else {
			giris.push_back(ch);
			cout << '*';
		}
	}
	cout << endl;
}


int main() {
	string id = "1",girisId , sif = "0", girisSif;
	int sayac = 0;
	Otopark calisan(id, sif);
	cout << "OTOPARK PROGRAMINA HOS GELDINIZ!!!\n\n";
	do
	{
		if (sayac>0)
		{
			cout << "Yanlis deger girdiniz!!\nLutfen tekrar giris yapiniz\n\n";
		}
		cout << "Calisan Id'nizi giriniz:\t";
		gizliGiris(girisId);
		cout << "Calisan sifrenizi giriniz:\t";
		gizliGiris(girisSif);
		sayac++;
		system("cls");
	} while (id!=girisId || sif!=girisSif);
	calisan.menu();
	return 0;
}
