#include <iostream>

int main() 
{
    int a;
    int b;

    std::cout << "Birinci sayi: " << std::endl;
    std::cin >> a;
    std::cout << "Ikinci sayi: " << std::endl;
    std::cin >> b; // Kullanıcıdan klavye girişiyle veri almak için bu kullanımı yaparız. std::cout C dilindeki printf i std::cin scanf i temsil eder.


    // IF - ELSE

    if (a < 10 || a > 5) {
        std::cout << "Sonuc: " << a + b;
    }
    else {
        std::cout << "İslem yok.";
    } // if teki şart sağlanırsa if in içindeki, sağlanmazsa else içindeki şart sağlanır.

    std::cout << '\n';


    // FOR

    for (int i = 0; i < 100; i++) {
        std::cout << "Dongu: " << i << std::endl;
    } /* Değişkenin hangi sayıya eşit olduğunu, şartını ve ne kadar artıp azalacağını direkt for döngüsünde tanımlayarak yeni bir döngü kurabiliriz.
    Tek tek veri girmek yerine for kullanarak eziyet çekmekten kurtulabiliriz. Buradaki örnekte 1 den 100 e döngüyü arttırıp terminal ekranına basarız. */

    std::cout << '\n';


    // WHILE

    /* while (true) {
        std::cout << "Bilinmeyen islem";
    } */    
    
    /* Yıldız içine aldım çünkü şarta true yazdığım için sonsuza kadar bilinmeyen işlem yazacaktı. False olsaydı şarttaki mesajı ya da herhangi bir şeyi yapmayacağı için terminal ekranı boş kalacaktı.
    While döngüsünde sadece şartı parantez içinde yazarız. Arttırma azalma gibi işlemleri { } içinde uygun satırlarda örneğin i++ ya da i-- şeklinde belirterek döngü kurarız. */


    // DO - WHILE

    do {
        std::cout << "Bilinmeyen islem 2";
    } while (false); // Do içerisinde gereken mesajlar, işlemler verilir. Sonuna while bağlanır. Şartı sağlıyorsa devam edilir, sağlamıyorsa durur.


    // Birkaç syntax kuralı hariç döngü yapıları C ile aynıdır. 

}