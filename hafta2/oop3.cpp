#include <iostream>
using namespace std;

class Sarj
{

private:
    int sarjSeviyesi;

public:
    Sarj()
    {

        sarjSeviyesi = 50;
    }
    void SarjEt(int x)
    {
        if (x > 0 && sarjSeviyesi + x <= 100)
        {
            sarjSeviyesi += x;
            cout << "şarjiniz: " << sarjSeviyesi << "\n";
        }
        else
        {
            cout << "gecersiz referans araligi";
        }
    }
    int sarjGoster()
    {
        return sarjSeviyesi;
    }
};
int main()
{
    int miktar;
    cout << "hosgeldiniz ";
    Sarj srj;
    cout << srj.sarjGoster();
    cout << "ne kadar sarj etmek istiyorsunuz:";
    cin >> miktar;
    srj.SarjEt(miktar);
    
}