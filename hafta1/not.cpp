#include <iostream>
using namespace std;
int main()
{
    int vize , final;
    float ortalama;

    cout<< "lütfen vize notunu giriniz: ";
    cin>> vize;
    cout<< "kütfen final notunu girinz: ";
    cin>> final;
    
    ortalama= (vize*0.4)+(final*0.6);

    cout<< "ortalamaniz: "<<ortalama<< endl;

    if (ortalama<60)
    {
        cout<< "kaldiniz"<< endl;
    }
    else if (ortalama<0 ||ortalama>100)
    {
        cout<< "geçersiz ortalma araligi"<<endl;
    }
    else
    {
        cout<< "gectiniz"<< endl;
    }
    return 0;
}