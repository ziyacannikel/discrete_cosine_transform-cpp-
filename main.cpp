#include<iostream>
#include "dct.h"
using namespace std;
int main()
{

	/*
	�RNEK OLARAK N DE�ER� 4 SE��LM��T�R AKS� TAKD�RDE EKRAN FOTO�RAFI ALIRKEN PROBLEM OLUYOR
	- NESNE �A�RILIR
	- NESNE �A�RILIRKEN ATANAN N DE�ER� KONTROL ED�L�P EKRANA YAZDIRILIR
	- T�ME DOMA�N DE OLU�TURULMU� RASTGELE MATR�SE DCT UYGULANIR VE FRKEKANS DOMA�N�NDE YEN� MATR�S ELDE ED�L�R
	- YEN� MATR�S YAZDIRILIR
	- N DE�ER� TEKRAR ATANIR
	- YEN� N DE�ER� YAZDIRILIR

	*/
	dct_class object(4);                    //CONSTRUCTOR FONKS�YONU �NT 4 DE�ER ALARAK NESNE OLU�TURULUR
	                                        //OBJE OLU�TU�U ANDA CONSTRUCTOR FONKS�YONU MATR�SLER� HAZIRLAR

	cout << "N value :";
	int a = object.get_N_value();           //PR�VATE N DE�ER� ARACI FONKS�YON �LE ALINIR
	cout << a;
	cout << "\n\n";

	object.print_freq_domain();             //FREKANS D�ZLEM�NDEK� MATR�S YAZDIRILIR
	cout << "\n\n";

	object.set_N_value(8);                  //PR�VATE N DE�ER� ARACI FONKS�YON �LE ATANIR

	cout << "new N value :";
	a = object.get_N_value();               //PR�VATE N DE�ER� ARACI FONKS�YON �LE TEKRAR ALINIR VE KONTROL ED�L�R
	cout << a;

	return 0;
}