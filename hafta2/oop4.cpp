#include <iostream>
#include <string>

using namespace std;

class Ogrenci
{
private:
    string isim;
    int vize;
    int final;

public:
    Ogrenci(string ad, int v, int f)
    {
        isim = ad;
        vize = v;
        final = f;
    }

    double ortalamaHesapla()
    {
        return (vize * 0.4) + (final * 0.6);
    }

    string getIsim()
    {
        return isim;
    }
};

int main()
{

    Ogrenci sinif[3] = {
        Ogrenci("Erkan", 60, 80),
        Ogrenci("Ahmet", 40, 50),
        Ogrenci("Ayse", 90, 85)};

    cout << "--- SINIF NOT LISTESI ---" << endl;

    for (int i = 0; i < 3; i++)
    {

        cout << "Ogrenci: " << sinif[i].getIsim()
             << " | Ortalama: " << sinif[i].ortalamaHesapla() << endl;

        if (sinif[i].ortalamaHesapla() >= 50)
        {
            cout << "Durum: GECTI" << endl;
        }
        else
        {
            cout << "Durum: KALDI" << endl;
        }
        cout << "-----------------------" << endl;
    }

    return 0;
}