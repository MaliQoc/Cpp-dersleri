#include <iostream>


void test(int dizi[]) {

	for (int i = 0; i < 3; i++) {
		std::cout << dizi[i] << '\n'; // Dizi oluşturmak için for döngüsünü kullandık. Aşağıda main fonksiyonunun içinden çağırdık.
	}
}



int main()
{
	int puanlar[] = { 10,20,50,100 };
	std::cout << puanlar[0] << '\n'; // Dizilerde ilk eleman [0] ile ifade edilir. Tüm sayı sistemlerinde ilk sayı 0'dır. Buna çok dikkat etmeliyiz.

	int puan[]{
		10,
		20,
		50,100
	};
	std::cout << puan[3] << '\n'; // Diziler C++ dilinde bu şekilde ifade edilebilir. puan dizisinin 4. elemanı puan[3] olduğu için terminale 100 sayısı bastırılacaktır.

	int p[5]{};

	int s[3]{ 10,15,20 };
	int* c = s;
	int* ptr = s + 2;
	std::cout << c << '\n'; // s c'nin bellekteki adresini tutar.
	std::cout << ptr << '\n'; // s 2 ile toplandığı zaman bellekteki adresi 2 ile toplamış oluruz. Tabii bellekteki adres onaltılı sistemle yazıldığı için klasik onlu toplamadan farklı olacaktır.
	std::cout << *ptr << '\n'; // s s[0] anlamına gelir 2 ile toplandığı için dizinin 3. elemanına yönlendirilir ( s[2] ). Burada adres değil direkt değişkenin değeri olarak düşünürüz.

	int a[3][2]
	{
		{
			1,2
		},
		{
			5,9
		},
		{
			10,25
		}
	}; // 3 satır ve 2 sütundan oluşan diziyi bu şekilde tanımladık. Örneğin 1,2 de 2 yi yazmasaydık yerine default(varsayılan) olarak 0'ı atayacaktı.

	for (int i = 0; i < 3; i++) {
		for (int i2 = 0; i2 < 2; i2++) {
			std::cout << a[i][i2] << std::endl;
		}
	}

	std::cout << std::size(a) << '\n'; // a dizisinin genişliğini gösterir.

	int b[]{ 5,8,9 };
	test(b);
}