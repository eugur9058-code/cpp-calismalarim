#include <iostream>
using namespace std;
int main()
{
    int kutle, hiz;
    float enerji;

    cout<< "lütfen kütleyi giriniz: ";
    cin>> kutle;
    cout<< "lüten hizi giriniz: ";
    cin>> hiz;

    enerji=0.5* kutle* hiz*hiz;

    cout<< "kinetik enerji : "<< enerji<< "joule"<< endl;

    return 0;
}