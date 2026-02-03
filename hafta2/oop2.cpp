#include <iostream>
#include <string>

using namespace std;

class Kitap {
private:
    // 1. KURAL: Değişkenler private (Dışarıdan kimse dokunamaz)
    string kitapAdi;
    string yazar;
    int sayfaSayisi;

public:
    // 2. KURAL: Constructor (Nesne doğarken değerleri atar)
    Kitap(string ad, string yazarIsmi, int sayfa) {
        kitapAdi = ad;
        yazar = yazarIsmi;
        // Sayfa sayısı kontrolünü constructor içinde de yapabiliriz
        if (sayfa > 0) {
            sayfaSayisi = sayfa;
        } else {
            sayfaSayisi = 0;
            cout << "Uyari: Sayfa sayisi negatif olamaz, 0 atandi!" << endl;
        }
    }

    // 3. KURAL: Setter (Değişkeni güvenli bir şekilde değiştirmek için)
    void setSayfaSayisi(int s) {
        if (s > 0) {
            sayfaSayisi = s;
            cout << "Sayfa sayisi guncellendi: " << s << endl;
        } else {
            cout << "Hata: Gecersiz sayfa sayisi!" << endl;
        }
    }

    // 4. KURAL: Getter (Private veriyi dışarıya güvenli bir şekilde okutmak için)
    string getKitapAdi() { return kitapAdi; }
    string getYazar() { return yazar; }
    int getSayfaSayisi() { return sayfaSayisi; }
};

int main() {
    // Nesne oluşturma (Constructor burada devreye girer)
    Kitap k1("Nutuk", "Mustafa Kemal Ataturk", 600);

    // Bilgileri Getter ile okuma (k1.kitapAdi diyemeyiz çünkü private)
    cout << "Kitap Adi: " << k1.getKitapAdi() << endl;
    cout << "Yazari: " << k1.getYazar() << endl;
    cout << "Sayfa Sayisi: " << k1.getSayfaSayisi() << endl;

    cout << "--- Guncelleme Denemesi ---" << endl;

    // Hatallı bir güncelleme denemesi
    k1.setSayfaSayisi(-50); 
    
    // Doğru bir güncelleme denemesi
    k1.setSayfaSayisi(650);

    cout << "Yeni Sayfa Sayisi: " << k1.getSayfaSayisi() << endl;

    return 0;
}