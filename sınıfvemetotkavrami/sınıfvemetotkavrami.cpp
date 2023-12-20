#include <iostream>

// Class (sınıf) olayı nesneye yönelik programlamada çok önemli bir yer tutar. main fonksiyonundan oluşturduğunuz ana veya yavru sınıfları çağırabilirsiniz. Bu NYP içeren dillere modülerlik katar.

class Hesapla {
public:
    int yukseklik;
    int genislik;
    int alan;

    void giris() {
        std::cout << "Yukseklik gir: " << std::endl;
        std::cin >> yukseklik;

        std::cout << "Genislik gir: " << std::endl;
        std::cin >> genislik;
    }

    /* Metotlar(methods) class içerisindeki küçük iş parçacıklarıdır.
    main fonksiyonunu ve hesapla sınıfını ayrı iki fonksiyon olarak düşünürsek, giris ve hesapla metotları hesapla classının farklı görev içeren iki parçasıdır (fonskiyoncuk). */

    void hesapla() {
        alan = yukseklik * genislik;
        std::cout << "Alan: " << alan;
    }

    /* giris kısmında girilecek 2 veriyi aldık.hesapla kısmında da hesaplamayı yaptık.
    Normalde bunlar basit işlem olduğu için hepsini main fonksiyonunda (tek bir yerde) yapabilirdik fakat daha kompleks alanlarda bunları kullanmak hem işimiz kolaylaştıracak hem de bellek tüketimini azaltacaktır. */

};


int main()
{
    Hesapla hesap; // Hesapla classını değişken tipi gibi kullanıp hesap değişkenimizi oluşturduk.
    hesap.giris();
    hesap.hesapla(); // giris ve hesapla metotlarını class üzerinden çağırmış olduk.
}