#include <iostream>
using namespace std;

/* C++ dilinde isim alanlarının kullanılma sebebi isim çakışmalarını önlemek için tanımlayıcıların isimlerini yerel olarak ifade etmektir.
Kullanılmadığında, farklı yerlerde kullanılan aynı isme sahip değişken, fonksiyon ve sınıflar arasında bir karışıklık yaşanmaktadır.*/

class Payment {
public:
    /* Erişim belirteçlerinden biri olan public nesneye yönelik programlama dillerinde karşımıza çıkar.
    Public(genel) herhangi bir üyeye programın içinden olmak kaydıyla sınıfın dışındaki herhangi bir yerden erişilebilir. */

    float tutar, tutar8;
    string paraBirimi;

    /* ya da using namespace string olmadan std::string paraBirimi; şeklinde kullanılabilir. Nasıl olduğunu anlatalım:

    using namespace std: Program using ifadesi ile tüm standart C++ kütüphanesinin yer aldığı std namespace isim alanını kullanacağını bildirir.
    Böylece std:: ifadesini kullanmadan std isim alanında yer alan üyelere doğrudan erişim sağlanır. */

    Payment(bool f, std::string a) { 

        /* KURUCU FONKSİYONLAR(CONSTRUCTORS) 
        Üyesi oldukları sınıftan bir nesne yaratılırken kendiliğinden canlanırlar. 
        Bu tür fonksiyonlar bir nesnenin kurulması aşamasında yapılması gereken işleri, mesela verilere uygun başlangıç değerleri atamak için kullanılırlar. Üyesi oldukları sınıf ile aynı ismi taşırlar.
        Parametre alır veya almayabilirler ancak geri dönüş değerleri yoktur. Geri dönüş tipi olarak herhangi bir tip (void bile) yazılmaz. 
        Kurucular nesne yaratılırken sınıfın dışından çağırılacağından açık (public) üyeleri arasında yer almalıdırlar. */

        tutar = 1.2;
        paraBirimi = "tl";
        std::cout << a;
    }

    Payment(bool f) {
        tutar = 1.2;
        tutar8 = 1.8;
        paraBirimi = "tl";
        std::cout << tutar << '\n';
        std::cout << tutar8 << '\n';
    }

    Payment() {

    }

    // Yukarıdaki

    ~Payment() {
        std::cout << "Bitti." << '\n';

        /* YIKICILAR(DESTRUCTORS)
        NYP içeren dillerde işi biten sınıfın bellekte yer kaplamaması için ~ işareti kullanarak bir nevi çöpe atma işlemi gerçekleştirmiş oluyoruz.
        Kompleks programlar yazarken bunu kullanmak çok önemlidir. Belleğin dinamik yönetimi ve sistemin etkin kullanılması açısından önemli bir yer tutar.
        Bu örneğimizde çöpe atma işlemini gerçekleştirdikten (programın işi bittikten) sonra Bitti mesajını en sonda terminale bastıracaktır. */

    }

    void pay() {
        //payTo(hashCode,tutar,paraBirimi);
        std::cout << "Odeme alindi." << '\n';
    }

};

int main() {

    Payment pay(true, "Merhaba\n"); // (bool,string) türünde çağırdığımız için Merhabayı bize bastıracaktır.
    Payment pay2(true);
    Payment pay3(true);
    // 2 farklı isimde çağırdık ama aynı sınıf türünden (bool) olduğu için 2 defa aynı ifade basılacaktır.

    pay.pay();

    // Bitti mesajını 3 defa alacağız çünkü Payment classından 3 farklı constructorı çağırdık.

    return 0;
}