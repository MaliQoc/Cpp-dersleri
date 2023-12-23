#include <iostream>

/* IDE KAVRAMI[INTEGRATED DEVELOPMENT ENVIRONMENT(ENTEGRE YAZILIM GELİŞTİRME ORTAMI)]
Geliştiricilerin daha kolay ve verimli bir şekilde yazılım geliştirmesine yardımcı olan, kodlama hatalarını tespit eden yazılım uygulamalarıdır. */

/* POLIMORPHISM(ÇOK BİÇİMLİLİK)
Polimorphism kavramı IDE'nin (Visual Studio gibi derleyiciler) hangi komuta göre hareket edeceğine derlerken veya çalışırken karar vermesi işlemidir. Function override'da (iki aynı isimli ve farklı parametre girilmiş metotlarda)
IDE derlerken hangisinin çalışacağına karar verir fakat burada çalıştırırken karar veriyor. Başta hangi sınıftaki metodu çalıştıracak haberi yok. */

class Silah {
public:
    std::string isim;
    int mermiKapasitesi;

    /* void ates() {
        std::cout << "silah sesi yok";
    } */ // Aşağıda override uyguladığımız için bu kısmı açıklama içine aldık. Almasak ve altta virtual void kullanmasak sadece ana sınıftaki ates() metodu çağırılacaktı.

    virtual void ates() = 0;
};

/* OVERRIDE(METOT EZMEK)
Ana sınıftaki metot yerine yavru sınıftaki aynı isimli metodu çağırırsak override olayını gerçekleştirmiş oluruz.
void atesEt(Silah* silahPtr) {silahPtr->ates();} tarzı olaylarda virtual kullanılması gerekir. Aksi takdirde sadece ana sınıfın metodu okunacaktır. */

class Ak47 : public Silah {
public:
    bool seriTek;
    int kayisUzunlugu;
    bool durbun;

    void ates() {
        std::cout << "bom bom\n";
    }
};


class Pistol : public Silah {
public:
    int kurmaKoluDeseni;

    void ates() {
        std::cout << "bam bam\n";
    }
};


class M1 : public Silah {
public:
    bool seriTek;
    int kayisUzunlugu;
    int kurmaKoluPozisyonu;

    void ates() {
        std::cout << "bum bum";
    }
};


void atesEt(Silah* silahPtr) {
    silahPtr->ates();
}


int main()
{
    Ak47 ak47;
    Pistol pistol;
    M1 m1;

    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1); // Sanal metot aracılığıyla birden fazla özelliği çağırabildik. Aksi takdirde silah sınıfının içindeki düz metotta ne yazıyorsa onu çağırır.

    return 0;
}