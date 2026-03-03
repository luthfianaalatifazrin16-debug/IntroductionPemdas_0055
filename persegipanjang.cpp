#include <iostream>
using namespace std;

float p, l;

void input()
{
    cout << " Masukkan Panjang : ";
    cin >> p;
    cout << " Masukkan Lebar : ";
    cin >> l;
}

float LuasPersegipanjang()
{
    return p * l;
}

void output()
{
    cout << " Hasilnya = " << LuasPersegipanjang();
}

int main()
{
    input();
    output();
}