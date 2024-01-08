#include <iostream>

#define SAYI 1
#define TOPLA(a,b) a+b
#define DEBUG

// Define önişlemcisi kodda herhangi bir kelime veya yapı yerine kendi belirlediğimiz ifadeyi yerleştirir. Örneğin #define int a yaparsak integer değişken tipini belirtmek için a harfini kullanmak yeterli olacaktır.

int main()
{
    std::cout << SAYI + SAYI;
#ifdef DEBUG // Eğer indefteki koşulu yani #define DEBUG ı yazdıysak tanımlama komut olarak çalışır. #define DEBUG yazmasaydık ifdef DEBUG ve endif DEBUG içerisindeki koşul çalışmayacaktır.
    std::cout << '\n';
    std::cout << TOPLA(10, 10);
#endif DEBUG
}

// Yukarıda DEBUG ı define da tanımladık. Sonra ifdef ve endifte çalıştırma şartı olarak kullandık.