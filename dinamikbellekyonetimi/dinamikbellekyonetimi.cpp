#include <iostream>

/* int main()
{
    int* a = (int*)malloc(sizeof(int));
    *a = 10;
    free(a);
} */

/* malloc ta veri türlerinin bellekte ne kadar yer kapladığını görebiliyoruz.
free de kısaca temizlik yapıyoruz. İşi biten fonksiyon bellekte tutulmaz. Bellek sadece çalıştırılırken yorulduğu için daha efektif kullanmış oluruz. */

/* TYPEDEF
Örneğin typedef int btk yaparsanız artık int yerine btk kullanabirsiniz.
(int a = 5) = (btk a = 5) */

class Silah {
public:
    int* a = nullptr;
    int* b = nullptr;

    Silah(int toplaBirinci, int toplaIkinci) {
        a = new int;
        b = new int;

        *a = toplaBirinci;
        *b = toplaIkinci;
    }

    ~Silah() {
        delete a;
        delete b;
        std::cout << "Silindi.";
    }
};

int main()
{
    Silah* silah = new Silah(10, 10);

    delete silah; // delete free gibi kullanılabilir. Aynı işleve sahiptirler.
}