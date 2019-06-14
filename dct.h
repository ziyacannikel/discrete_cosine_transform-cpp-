#ifndef dct_h
#define dct_h
class dct_class
{
public:

	dct_class(int size);                  //Constructor  fonksiyonu
	~dct_class();                         //destructor  fonksiyonu
	void set_N_value(int value_of_N);     //istenen set fonksiyonu
	int get_N_value(void);                //istenen get fonksiyonu
	void print_freq_domain();             //dönüþtürülmüþ matrisi ekrana yazdýrmak için

private:

	int N=8;                              // N 
	float** time;                         // time domaini matrisi
	float** freq;                         // frekans domaini matrisi
	float pi = 3.14159265358979323846;
	void transform();                     // DCT
	void inverse();                       // INVERSE DCT
	void fill_array(int N_value);         // OLUÞTURULAN DÝZÝYÝ DOLDURMAK ÝÇÝN

};


#endif
