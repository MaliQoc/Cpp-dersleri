#include <iostream>
#include <string>

// string kütüphanesiyle karakterler,metinler ile alakalı bazı alanlarda özel kullanımlar yapabiliriz.

void mesaj() {
    std::cout << "merhaba\n";
}

void mesaj2(char c, char d , char e) {
    std::cout << c << d << e; // Yan yana iki char karakteri (harf) bastırır.
}

void print(std::string text) {
    std::cout << text; // Text değişkeninde istediğiniz mesajı verebilirsiniz.
}

void printf(std::string text = "Test\n") {
    std::cout << text; // Direkt olarak text mesajını bastırır.
}

int topla(int a, int b) {
    return a + b; // Herhangi iki sayıyı toplayabilirsiniz. a ve b nin hangi değer olacağını main fonksiyonunda çağırırken vereceksiniz.
}

int getir(int(*fint)(int, int)) {
    int h = fint(10, 10); // Burada fint adlı integer pointer a int değerler atıyoruz. Fonksiyon içinden ekstradan düzenleme yapmanıza gerek yok.
    return h;
}

/* main fonksiyonunun içinden dışarıda yazdığımız fonksiyonları çağırabiliriz.Bu şekilde kodun aslını düzeltmek gibi ekstra meşguliyetler yerine dışardaki fonksiyonlar üzerinde düzenlemeler yaparız.
Merdivenin tamamını bozmak yerine bozuk olan basamaklara yöneldiniz gibi düşünebilirsiniz. */

int main()
{
    mesaj();
    mesaj();
    mesaj();
    mesaj();
    mesaj();
    mesaj();
    mesaj();
    mesaj();
    mesaj2('A','B','C');
    print("\nMerhaba\n");
    printf();
    int a = topla(3, 5);
    std::cout << a << '\n';
    int i = getir(topla);
    std::cout << i;

    // Fonksiyonlarımızı main fonksiyonundan bu şekilde çağırabiliriz.
}