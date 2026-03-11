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
// Fungsi untuk menentukan status berat badan
string cekStatus(float bmi)
{
    if (bmi < 18.5)
    {
        return "Berat Badan Kurang";
    }
    else if (bmi < 25)
    {
        return "Berat Badan Normal";
    }
    else if (bmi < 30)
    {
        return "Berat Badan Kelebihan";
    }
    else
    {
        return "Obesitas";
    }
}
int main()
{
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    // Memanggil prosedur masukan
    masukanData(berat, tinggi);
    // Menghitung BMI menggunakan fungsi
    bmi = hitungBMI(berat, tinggi);
