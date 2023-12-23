#include <iostream>

/* STATIC
static fonksiyon çalışması bitene kadar verileri bellekte tutar.Buraa sonuç 5 çıkar çünkü test fonksiyonunda artırılan sayı her çağırmada artmaya devam edecektir.
static olmasaydı her çağırıldığında aynı sonucu yani 0+1 sonucu olan 1 i verirdi. */

void test() {
    static int a = 0;
    a++;
    std::cout << a << std::endl;
}

int main()
{
    test();
    test();
    test();
    test();
    test();
}

/* CONST
Ayriyeten değinelim: const ifadesi sabitleme olarak düşünülebilir. Örneğin const int yaptığımızda o değişkenin değeri ne yapılmaya çalışılırsa çalışsın yine aynı kalır. */


// (Aşağıdaki kodu üstteki kodu alıntı haline getirerek çalıştırabilirsiniz.)

/* class A {
private:
    int deger = 10;
};

int main() {
    const int a = 10;
    a = 500;
    // (const ifadeyi değiştiremezsin uyarısı verecektir.)
} */