#include <iostream>

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