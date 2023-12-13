#include <iostream> // C programlama dilindeki stdio.h kütüphanesine benzer. Temel tüm komutları içerir.

// Ana bir main fonksiyonu olmadan program yazamazsınız.
int main()
{
    std::cout << "Hello World!\n"; // std::cout << " "; şeklinde mesajınızı tanımlayabilirsiniz. C deki printfle benzerlik göstermektedir. Zaten C++ genel olarak C ile yazıldığı için benzerlik göstermektedir.

    int sayi1 = 5;
    int sayi2 = 10; // Değişken tanımlaması C ile aynıdır.

    std::cout << sayi1 + sayi2; // Örneğin iki değişkeni toplamak için ayrı bir toplama fonksiyonu oluşturmak yerine tek seferde hem topladık hem de sonucu bastırabildik.

}