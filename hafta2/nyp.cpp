#include <iostream>
#include <string>
using namespace std;

class araba
{

public:
    string renk;
    string model;
    int yas;
};
int main()
{

    araba car;

    car.renk = "kirmizi";
    car.model = "mercedes";
    car.yas = 18;

    cout << "arabanin rengi : " << car.renk << "\n";
    cout << "arabanin modeli: " << car.model << "\n";
    cout << "arabanin yasi: " << car.yas << "\n \n";

    araba car2;
    car2.renk = "sari";
    car2.model = "BMW";
    car2.yas = 9;

    cout << "arabanin rengi : " << car2.renk << "\n";
    cout << "arabanin modeli: " << car2.model << "\n";
    cout << "arabanin yasi: " << car2.yas << "\n";

    return 0;
}