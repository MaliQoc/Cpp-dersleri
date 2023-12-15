#include <iostream>

int main()
{
    float a;
    float b;
    char islem;

    std::cout << "Birinci sayi: " << std::endl;
    std::cin >> a;
    std::cout << "Ikinci sayi: " << std::endl;
    std::cin >> b;

    std::cout << "Islem giriniz: " << std::endl;
    std::cin >> islem;

    /* Switch case döngüsünde amacımız bol seçenekli programlar yazabilmektir. Örneğin hesap makinesinde yapacağınız tüm işlemleri ayrı sembollere atayıp farklı switch ağaçları olarak gösterebilirsiniz.
    + toplama işlemine , - çıkarma işlemine götürebilir gibi. */

    switch (islem) {
    case '+':
        std::cout << "Sonuc: " << a + b;
        break; // Her işlemden sonra break koymanız gerekir. Yoksa diğer işlemlere geçiş yapamaz.
    case '-':
        std::cout << "Sonuc: " << a - b;
        break;
    case '*':
        std::cout << "Sonuc: " << a * b;
        break;
    case '/':
        std::cout << "Sonuc: " << a / b;
        break;
    default:
        std::cout << "Hatali giris";
        break;

     /* Belirtilen seçenekler harici herhangi bir işlem girişinde default içerisindeki mesajı alırsınız. Bu nedenle switch case de default kullanmak zorundasınız.
     Aksi takdirde yapmak istediğiniz işlem ve sonucu terminalde gözükmeyecektir. */

    }
}