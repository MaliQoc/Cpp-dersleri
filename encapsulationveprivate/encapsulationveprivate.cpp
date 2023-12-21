#include <iostream>

class Payment {
private:
    float tutar;

    /* ENCAPSULATION(KAPSÜLLEME)
    Basitçe bir sınıfın dışarıya karşı kapalı hale getirilmesi ve sınıfa erişimin kapsüllenmesi yani engellenmesidir. Bilindiği üzere, sınıflar, özelliklerden (properties) ve metotlardan (methods) oluşmaktadır. 
    Veri kapsüllemesinin amacı, sınıfta bulunan özelliklerin erişimini kontrol altına almak ve sınıfın özelliklerinin dışarıdan erişimini engelleerek, sınıftaki metotlar marifetiyle erişimi kontrol etmektir. */

public:
    std::string paraBirimi; // string değişkeni std:: şeklinde tanımladık. C++ dilinde sadece string yazarak tanımlanamaz.

    // private olan değişkeni bu şekilde düzenleyebiliriz.
    void setTutar(float t) {
        if (t > 0) {
            tutar = t;
        }
        else {
            tutar = 0.1;
        }
    }

    void pay() {
        std::cout << tutar << "\nOdeme alindi.";
    }
};

int main()
{
    Payment pay;
    pay.setTutar(49.5); // direkt çağıramıyoruz çünkü tutar değişkeni private.
    pay.pay();
}