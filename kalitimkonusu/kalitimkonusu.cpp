#include <iostream>

/* KALITIM(INHERITANCE)
Nesneye yönelik programlamanın en önemli özelliklerinden biridir. Bir nesneden türetilen bir nesnenin türetildiği nesnenin tüm özelliklerine sahip olmasıdır.
Kendisinden türetme yapılan sınıf ana, türetilen sınıflar ise yavru sınıf olarak isimlendirilir.
Bir ana sınıftan bir sınıf türetildiğinde, ana sınıfta yer alan tüm veri ve metotlar türetilen sınıf tarafından kullanılabileceği gibi yavru sınıf içinde de yeni veri ve metotlar tanımlanabilir.
Eğer ihtiyaç duyulursa, ana sınıftan devralınan metotlar yeniden tanımlanır (overriding) ve aynı isim altında farklı kodlar yazılır.
Ana sınıftan bir alt sınıf türeterek ana sınıfta yer alan veri ve metotların devralınması, devralınan metotlar için yeniden kod yazmaya gerek duymadan ana sınıf içinde yer alan veri ve metotları kullanmaya olanak sağlar.
*/


class Silah {
public:
    std::string isim;
    int mermiKapasitesi;
};

// Ana ve yavru sınıflar, class Yavru sınıf : public Ana sınıf biçiminde kullanılır.

// Ak47 sınıfı, Silah sınıfından türetiliyor.
class Ak47 : public Silah {
public:
    bool seriTek;             // Ak47'nin seri ateş özelliğini tutan bir özellik.
    int kayisUzunlugu;        // Ak47'nin kayış uzunluğunu tutan bir özellik.
    bool durbun;              // Ak47'nin dürbün özelliğini tutan bir özellik.

    void atesEt() {

    }
};

// Pistol sınıfı, Silah sınıfından türetiliyor.
class Pistol : public Silah {
public:
    int kurmaKoluDeseni;      // Pistoletin kurma kolu desenini tutan bir özellik.

    void atesEt() {

    }
};

// M1 sınıfı, Silah sınıfından türetiliyor.
class M1 : public Silah {
public:
    bool seriTek;             // M1'in seri ateş özelliğini tutan bir özellik.
    int kayisUzunlugu;        // M1'in kayış uzunluğunu tutan bir özellik.
    int kurmaKoluPozisyonu;   // M1'in kurma kolu pozisyonunu tutan bir özellik.

    void atesEt() {

    }
};

// Silah nesnesini ekrana yazdırmak için kullanılan fonksiyon.
void goster(Silah* silahptr) {
    std::cout << silahptr->isim;
    std::cout << silahptr->mermiKapasitesi;
}

// Ana program başlıyor.
int main() {
    // Ak47, Pistol ve M1 sınıflarından nesneler oluşturuluyor.
    Ak47 ak47;
    ak47.isim = "Ak47 yeni dizayn.\n";
    ak47.mermiKapasitesi = 17;

    Pistol pistol;
    Pistol& pistolRef = pistol; // Deneme amaçlı pointer kullanarak nesne oluşturduk. Gösterm amaçlıdır.
    pistolRef.isim = "test\n";
    pistolRef.mermiKapasitesi = 18;

    M1 m1;
    m1.isim = "Aslan\n";
    m1.mermiKapasitesi = 19;

    // Nesneler ekrana yazdırılıyor.
    goster(&ak47);
    std::cout << '\n' << '\n';
    goster(&pistol);
    std::cout << '\n' << '\n';
    goster(&m1);

    return 0;
}