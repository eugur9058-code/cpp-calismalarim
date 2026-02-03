#include <iostream>
using namespace std;

class CİHAZ{

    protected:
    string marka;
    string model;

    public:
    CİHAZ(string ad, string soyad){
        marka= ad;
        model= soyad;

    }
    void ac(){
        cout<<"Cihaz aciliyor"<< endl;

    }

};
class TELEFON : public CİHAZ{
    
    private:
    int depolama;

    public:
    TELEFON(int dep, string ad, string mod): CİHAZ(ad, mod){
        depolama=dep;
    }
    void aramaYap(){
        cout<<"arama yapiliyor"<<endl;
    }
    void bilgileriGoster() {
        cout << "marka: " << marka << " | model: " << model <<"depolama: "<< depolama << endl;
    }

};
class Bilgisayar : public CİHAZ{
    
    private:
    string ekrankarti;

    public:
    Bilgisayar(string Ekr, string ad, string soyad): CİHAZ(ad, soyad){
        ekrankarti=Ekr;
    }
    void Oyunac(){
        cout<<"oyun açiliyor"<<endl;
    }
};
int main(){
    string mark, mod;
    int dep;
    TELEFON tel;

    cout<<"lüten telefon markasini giriniz: "<<endl;
    cin>>mark;
    cout<<"lütden telefon modelini giriniz: "<<endl;
    cin>>mod;
    cout<<"lütfen telefonun depolamasini giriniz:"<<endl;
    cin>>dep;
    tel.ac();
    tel.Telefon(dep, mark,mod);
    tel.bilgileriGoster();
    tel.aramaYap();

    

}
