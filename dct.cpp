#include "dct.h"
#include <iostream>
#include <cmath>
using namespace std;

dct_class::dct_class(int size)              //Constructor  fonksiyonu
{
	N = size;                               //private olan N atamasý

	time = new float*[N];                   //dinamik time domain matrisi
	for (int i = 0; i < N; ++i)             // dinamik olarak iki boyutlu dizi oluþturmak için
		time[i] = new float[N];
	
	freq = new float*[N];                   //dinamik frekans domaini matrisi
	for (int i = 0; i < N; ++i)             // dinamik olarak iki boyutlu dizi oluþturmak için
		freq[i] = new float[N];
	
	fill_array(size);                       //time domain matrisini doldurmak için
	transform();

}
dct_class::~dct_class()                     //destructor  fonksiyonu
{
	for (int i = 0; i < N; ++i)				//time domain matrisi alanýný temizler
		delete[] time[i];
	delete[] time;

	for (int i = 0; i < N; ++i)				//frequency domain matrisi alanýný temizler
		delete[] freq[i];
	delete[] freq;
}

void dct_class::set_N_value(int value_of_N)           // N deðeri atamak için
{
	N = value_of_N;
}

int dct_class::get_N_value(void)                      // N deðerini öðrenmek için
{
	return N;
}

void dct_class::print_freq_domain()                   // dönüþtürülmüþ matrisi ekranda yazdýrmak için
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			std::cout << freq[i][j] << "\n";
}


void dct_class::fill_array(int N_value)               // matrisin içini doldurmak için (ödevde özellikle bir matris belirtilmemiþ)
{
	for (int i = 0; i < N_value; ++i)
		for (int j = 0; j < N_value; ++j)
			time[i][j] = (i+j);


}

void dct_class::transform()                           // DCT transformunu saðlamak için
{                                                     //DCT formülü uygulamasý  yapýlýr
                                                      //time domain matrisine doðrudan atama yapýlýr 
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







