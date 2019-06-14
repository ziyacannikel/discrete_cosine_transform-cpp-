#include<iostream>
#include "dct.h"
using namespace std;
int main()
{

	/*
	ÖRNEK OLARAK N DEÐERÝ 4 SEÇÝLMÝÞTÝR AKSÝ TAKDÝRDE EKRAN FOTOÐRAFI ALIRKEN PROBLEM OLUYOR
	- NESNE ÇAÐRILIR
	- NESNE ÇAÐRILIRKEN ATANAN N DEÐERÝ KONTROL EDÝLÝP EKRANA YAZDIRILIR
	- TÝME DOMAÝN DE OLUÞTURULMUÞ RASTGELE MATRÝSE DCT UYGULANIR VE FRKEKANS DOMAÝNÝNDE YENÝ MATRÝS ELDE EDÝLÝR
	- YENÝ MATRÝS YAZDIRILIR
	- N DEÐERÝ TEKRAR ATANIR
	- YENÝ N DEÐERÝ YAZDIRILIR

	*/
	dct_class object(4);                    //CONSTRUCTOR FONKSÝYONU ÝNT 4 DEÐER ALARAK NESNE OLUÞTURULUR
	                                        //OBJE OLUÞTUÐU ANDA CONSTRUCTOR FONKSÝYONU MATRÝSLERÝ HAZIRLAR

	cout << "N value :";
	int a = object.get_N_value();           //PRÝVATE N DEÐERÝ ARACI FONKSÝYON ÝLE ALINIR
	cout << a;
	cout << "\n\n";

	object.print_freq_domain();             //FREKANS DÜZLEMÝNDEKÝ MATRÝS YAZDIRILIR
	cout << "\n\n";

	object.set_N_value(8);                  //PRÝVATE N DEÐERÝ ARACI FONKSÝYON ÝLE ATANIR

	cout << "new N value :";
	a = object.get_N_value();               //PRÝVATE N DEÐERÝ ARACI FONKSÝYON ÝLE TEKRAR ALINIR VE KONTROL EDÝLÝR
	cout << a;

	return 0;
}