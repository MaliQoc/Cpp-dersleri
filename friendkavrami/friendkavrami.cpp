#include <iostream>


/* ARKADAŞ FONKSİYONLAR

Sınıfın üyesi olmamasına rağmen o sınıfın private üyelerine erişme hakkına sahip fonksiyonlardır. Bu işlem için friend anahtar kelimesini kullanırız.
friend kavramı pointerla private değerin kullanılmasını sağlar. Encapsulation işleminde önemlidir. */


class Payment {
private:
    float tutar;
public:
    std::string paraBirimi;

    void setTutar(float t) {
        if (t > 0) {
            tutar = t;
        }
        else {
            tutar = 0.1;
        }
    }

    void pay() {
        std::cout << tutar << "\nOdeme alindi.";
    }

    friend void degistir(Payment* ptr);
};


void degistir(Payment* ptr) {
    ptr->tutar = -10;
}


int main()
{
    Payment payment;
    degistir(&payment);
    payment.paraBirimi = "tl";
    payment.pay();
}

/* friend void degistir(Payment* ptr);

class içinde yer alınca,

void degistir(Payment* ptr) {
    ptr->tutar = -10;
}

biçiminde dışarıya yazılmalıdır. */


/* void degistir(Payment* ptr) hem friend kısmında hem de class dışında aynen kullanılmıştır ve hep böyle olmalıdır yoksa hata verir. */