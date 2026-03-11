#include <iostream>
#include <string>

using namespace std;

// Prosedur untuk mengambil masukan data
void masukanData(float &berat, float &tinggi)
{
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung nilai BMI
float hitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}
