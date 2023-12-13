#include <iostream>

int main()
{
    int d = 6;
    int a = 6;
    int c = 115;

    /* Normalde integer bellekte platforma göre 2 ya da 4 byte yer kaplar fakat gömülü sistemler, mikrodenetleyiciler ve diğer düşük seviyeli programlama görevleriyle çalışırken sorun yaşayabiliriz.
    Bazı durumlarda int8_t ya da unsigned (işaretsiz) versiyonu uint8_t kullanırız. Bellekte 1 byte yer kaplar. int8_t -128 ile 127 , uint8_t ise 0 ile 255 arasında değerleri alabilir. */

    std::cout << a + d << '\n';
    std::cout << c << '\n';

    bool isActive{ true };
    std::cout << "Hello World" << '\n';

    // Bir veri türünün başına const gelirse daha değiştirilemez.

    int b = 2;
    b = 3.4;
    std::cout << b << '\n';

    // Bu bir kapalı tür dönüşümüydü.

    int e = 70;
    e = static_cast<float>(8.3); // Tür dönüşümünde static_cast ten de faydalanabiliriz. Burada int bir değer float olan başka bir değere dönüştürülmüş.
    std::cout << e << '\n';

    // Bu da açık tür dönüşümüydü.

    int f = 5;
    std::cout << &f << '\n';

    // Pointer kullanımı C++ ta bu şekildedir.

    int g = 8;
    int* ptr = &g;

    // Pointer bellekteki adresi gösterir ancak pointer sembolleriyle değişkenin değerini de gösterebiliriz.

    std::cout << *ptr << '\n'; // Değer gösterir.
    std::cout << &g << '\n'; // Bellekteki adresi gösterir.
    std::cout << *&g; // Değer gösterir.

}