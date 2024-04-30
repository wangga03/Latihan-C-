// Buatlah program untuk menghitung Index Nilai berdasarkan :
// Index Nilai = (0.6 * Kepemimpinan + 0.4 * Akademik) 
// Input :

// Nama : Melina
// Kepemimpinan  : 78
// Akademik : 96

// Output :

// Nama : Melina
// Kepemimpinan : 78
// Akademik : 96
// Index Nilai : 85.20
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    system("cls");

    string nama;
    float nilai_kep, nilai_ak, index_nilai;

    cout << "Nama\t: "; cin >> nama;
    cout << "Kepemimpinan\t: "; cin >> nilai_kep;
    cout << "Akademik\t: "; cin >> nilai_ak;

    // Operasi Hitung

    index_nilai = (0.6 * nilai_kep + 0.4 * nilai_ak);
    cout << "================( Output )================" <<endl;
    cout << "Nama\t: " << nama <<endl;
    cout << "Kepemimpinan\t: " << nilai_kep << endl; 
    cout << "Akademik\t: " << nilai_ak <<endl;
    cout << "index\t: " << index_nilai <<endl;


    return 0;
}