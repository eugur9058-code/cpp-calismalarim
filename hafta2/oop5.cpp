#include <iostream>
#include <string>
using namespace std;

class SEKİL {
protected: // Miras alanlar erişebilsin diye protected yaptık
    string isim;
    string renk;

public:
    SEKİL(string ad, string rek) {
        isim = ad;
        renk = rek;
    }

    void bilgileriGoster() {
        cout << "Isim: " << isim << " | Renk: " << renk << endl;
    }
};

// DIKDORTGEN, SEKİL'den miras alıyor
class DIKDORTGEN : public SEKİL {
private:
    double en;
    double boy;

public:
    // KRİTİK NOKTA: Alt sınıfın constructor'ı, üst sınıfınkini böyle çağırır:
    DIKDORTGEN(string ad, string rek, double x, double y) : SEKİL(ad, rek) {
        en = x;
        boy = y;
    }

    void Alan() {
        cout << "Alan: " << en * boy << endl;
    }
};

int main() {
    string name, color;
    double uzunluk, yukseklik;

    cout << "Cismin adini giriniz: "; cin >> name;
    cout << "Cismin rengini giriniz: "; cin >> color;
    cout << "Enini giriniz: "; cin >> uzunluk;
    cout << "Boyunu giriniz: "; cin >> yukseklik;

    // Nesneyi tüm parametrelerle oluşturuyoruz
    DIKDORTGEN GEN(name, color, uzunluk, yukseklik);

    // SEKİL'den miras alınan fonksiyonu çağırıyoruz
    GEN.bilgileriGoster(); 
    // Kendi fonksiyonunu çağırıyoruz
    GEN.Alan();

    return 0;
}