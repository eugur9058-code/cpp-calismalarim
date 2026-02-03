#include <iostream>
#include <string>
using namespace std;

class BankaHesabi
{
public:
    string HesapSahibi;
    double Bakiye;

    void ParaYatir(double y)
    {

        cout << "yatirdiginiz tutar :" << y << endl;
        Bakiye += y;
    }

    void ParaCek(double x)
    {
        if (Bakiye - x < 0)
        {
            cout << "çekmek istediğiniz tutar kadar hesabizida para bulunmamaktadir" << endl;
        }
        else
        {
            cout << "cektiginiz tutar: " << x << endl;
            Bakiye -= x;
        }
    }
};
int main()
{

    double yatirma, cekme;
    BankaHesabi BH;

    BH.HesapSahibi = "Erkan";
    BH.Bakiye = 10000;

    cout << "cekmek istediginiz tutari girin";
    cin >> cekme;

    BH.ParaCek(cekme);
    cout << "bakiyeniz: " << BH.Bakiye << endl;

    cout << "yatirmak istediginiz tutari girin";
    cin >> yatirma;

    BH.ParaYatir(yatirma);
    cout << "bakiyeniz: " << BH.Bakiye << endl;

    return 0;
}