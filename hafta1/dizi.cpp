#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> liste;
    int girilenNot;
    int toplam=0;

    while (true)
    {
        cout<< "lğtfen not giriniz: ";
        cin>> girilenNot;

        if (girilenNot==-1)
        {
            break;
        }
        liste.push_back(girilenNot);//motu listeye ekle.

    }
    cout<< "\n notlar ----"<<endl;

    for(int x: liste)
    {

        cout<< x<< " ";
        toplam+=x;;
        
    }
    
    cout<< endl;

    if (liste.size()>0)
    {
            float ortalama = (float)toplam /liste.size();
        cout << "Sinif Mevcudu: " << liste.size() << endl;
        cout << "Sinif Ortalamasi: " << ortalama << endl;
    }
    else {
        cout << "Hic not girilmedi." << endl;
    }
    return 0;
}