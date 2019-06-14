#include "dct.h"
#include <iostream>
#include <cmath>
using namespace std;

dct_class::dct_class(int size)              //Constructor  fonksiyonu
{
	N = size;                               //private olan N atamas�

	time = new float*[N];                   //dinamik time domain matrisi
	for (int i = 0; i < N; ++i)             // dinamik olarak iki boyutlu dizi olu�turmak i�in
		time[i] = new float[N];
	
	freq = new float*[N];                   //dinamik frekans domaini matrisi
	for (int i = 0; i < N; ++i)             // dinamik olarak iki boyutlu dizi olu�turmak i�in
		freq[i] = new float[N];
	
	fill_array(size);                       //time domain matrisini doldurmak i�in
	transform();

}
dct_class::~dct_class()                     //destructor  fonksiyonu
{
	for (int i = 0; i < N; ++i)				//time domain matrisi alan�n� temizler
		delete[] time[i];
	delete[] time;

	for (int i = 0; i < N; ++i)				//frequency domain matrisi alan�n� temizler
		delete[] freq[i];
	delete[] freq;
}

void dct_class::set_N_value(int value_of_N)           // N de�eri atamak i�in
{
	N = value_of_N;
}

int dct_class::get_N_value(void)                      // N de�erini ��renmek i�in
{
	return N;
}

void dct_class::print_freq_domain()                   // d�n��t�r�lm�� matrisi ekranda yazd�rmak i�in
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			std::cout << freq[i][j] << "\n";
}


void dct_class::fill_array(int N_value)               // matrisin i�ini doldurmak i�in (�devde �zellikle bir matris belirtilmemi�)
{
	for (int i = 0; i < N_value; ++i)
		for (int j = 0; j < N_value; ++j)
			time[i][j] = (i+j);


}

void dct_class::transform()                           // DCT transformunu sa�lamak i�in
{                                                     //DCT form�l� uygulamas�  yap�l�r
                                                      //time domain matrisine do�rudan atama yap�l�r 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == 0)
			{
				freq[i][j] = 1 / (sqrt(N));
			}
			else
			{
				freq[i][j] = ( sqrt(2)/sqrt(N))*cos((pi*i*((2 * j) + 1)) / (2 * N));
			}

		}
	}
}







