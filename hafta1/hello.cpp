#include <iostream>
using namespace std;

int main()
{

    int yas;
    string isim;

    cout<< "Adin nedir";
    cin >> isim;

    cout<< "yasin kaç";
    cin >> yas;

    cout << "memnun oldum "<< isim << " demek " << yas <<" yasindasin"<< endl;
    
    if (yas>=18)
    {
        cout<< "resit bir bireysin"<< endl;
    }
    else
    {
        cout<< "daha resit bir birey degisin"<< endl;
    }
    return 0;

}