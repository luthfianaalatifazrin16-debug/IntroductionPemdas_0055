#include <iostream>
using namespace std;

float a, t;

void input()
{
    cout << "Masukkan Alas : ";
    cin >> a;
    cout << "Masukkan Tinggi : ";
    cin >> t;
}

float LuasSegitiga()
{
    return a * t * 1 / 2;
}

void output()
{
    cout << " Hasilnya = " << LuasSegitiga();
}

int main()
{
    input();
    output();
}
