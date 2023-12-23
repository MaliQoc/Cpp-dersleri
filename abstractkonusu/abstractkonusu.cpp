#include <iostream>


class Hayvan {
public:
	virtual void sesCal() = 0;
};

//ABSTRACT (SOYUTLAMA)
/* virtual metot sayesinde ana sınıfı soyutladık.Bu işlem seysinde istediğimiz sesi çıkarabileceğiz. Yapmasaydık sadece ana sınıftaki sesi duyardık.
Bu şekilde gövdesiz bir metoda sahip sınıf haline geldi. Kodun düzgün çalışması için bazı durumlarda özellikle kalıtımda gereklidir. */

class Kopek : public Hayvan {
public:
	void sesCal() {
		std::cout << "Hav";
	}
};


class Fare : public Hayvan {
public:
	void sesCal() {
		std::cout << "Miu";
	}
};


class Kedi : public Hayvan {
public:
	void sesCal() {
		std::cout << "Miyav";
	}
};


class Ordek : public Hayvan {
public:
	void sesCal() {
		std::cout << "Vak";
	}
};


void tumSesCal(Hayvan* ptr) {
	ptr->sesCal();
}


int main()
{
	Kopek kopek;
	Kedi kedi;
	Ordek ordek;
	Fare fare;

	tumSesCal(&fare); // Sadece farenin sesini göstermek istemişiz. Ana sınıfı soyutlayarak farenin sesini yazdırır.
}