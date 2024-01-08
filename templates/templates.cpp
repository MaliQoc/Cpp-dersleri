#include <iostream>


/* TEMPLATES (ŞABLONLAR)
Herhangi bir değişken tipinden bağımsız olarak kod yazmamızı sağlar. Bir sınıf veya bir fonksiyon oluşturmak için kullanılan bir taslaktır. */



/* template<typename T>

T max(T a, T b) {
    return (a > b) ? a : b;
}

int main()
{
    std::cout << max(1.1,5.5);
} */

// Bu şablonun amacı main fonksiyonunda hangi tip değeri gönderirseniz o şekilde çalışmasıdır. int veya float diye ayriyeten belirtmenize gerek yoktur.



/* template<typename T, typename U>

T max(T a, U b) {
    return (a > b) ? a : b;
}

int main()
{
    std::cout << max<int, int>(1.1, 5.5);
} */

// Bu da ikinci bir gösterimdir. Şablonlar fonksiyonlarda bu şekil gösterilir.

// Yukarıdaki kod bloklarını kapalı biçimde yazmamızın sebebi, konuyu tek kodda anlatmaktır. Çalıştırmak istediğiniz kodu açıp diğerlerini kapatarak inceleme yapabilirsiniz.

class Silah {};
class Mermi {};

template<typename T>
T* nesneYap(T* nesne) {
    return nesne;
}

int main()
{
    Silah silah;
    std::cout << nesneYap<Silah>(&silah);
}

// Bu da üçüncü bir şablon gösterimiydi. Şablonlar sınıflarda bu şekilde kullanılır.