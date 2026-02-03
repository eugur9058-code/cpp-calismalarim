#include <iostream>
using namespace std;
int main()
{
int fak=1;
int i=1;
int sayi;

    cout<<"lütfen faktoryeli bulunmasini istediginiz sayiyi giriniz: ";
    cin>>sayi;
    
    while (i<=sayi)
    {
        fak*=i;
        i++;
    }
    cout<< "sonuc: "<<fak<<endl;

    return 0;
}