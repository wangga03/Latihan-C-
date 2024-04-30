// Diketahui 3 kastil dengan tembok membentuk lingkaran, tentukan kastil dengan tembok terpanjang
// *Note : Keliling lingkaran = 2*phi*r
// Input :

// = = = = = Kastil 1 = = = = =
// = Nama : Leyndell
// = Radius Tembok : 750 
// = = = = = Kastil 2 = = = = =
// = Nama : Morne
// = Radius Tembok : 700
// = = = = = Kastil 3 = = = = =
// = Nama : Redmane
// = Radius Tembok : 800


// Output :
// = = = = = Kastil 1 = = = = =
// = Nama : Leyndell
// = Radius Tembok : 750
// = Keliling : 4710.00
// = = = = = Kastil 2 = = = = =
// = Nama : Morne
// = Radius Tembok : 700
// = Keliling : 4396.00
// = = = = = Kastil 3 = = = = =
// = Nama : Redmane
// = Radius Tembok : 800
// = Keliling : 4396.00
// Kastil 3 merupakan kastil dengan tembok terpanjang

#include <iostream>
#include <cmath>
using namespace std;
const float phi = 3.14;
struct latihan_percabangan
{
    string nama;
    float radius, hasil;
};
int main(){
    system("cls");
    int jml;
    cout << "Jumlah Kastil : "; cin >> jml;
    struct latihan_percabangan data[jml], temp;
    for (int i = 0; i < jml; i++)
    {
        cout << "========= Castil " << i+1 << " ========="<<endl;
        cout << i+1 << ". Nama\t: "; cin>>data[i].nama;
        cout << "   Radius\t: "; cin>>data[i].radius;

        data[i].hasil = 2*phi*data[i].radius;
    }

    system("pause");
    system("cls");


    for (int i = 0; i < jml; i++)
    {
        for (int j = 0; j < jml-i-1; j++)
        {
            if (data[j].hasil < data[j+1].hasil)
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }            
        }
        
    }
    for (int i = 0; i < jml; i++)
    {
        cout << "========= Castil " << i+1 << " ========="<<endl;
        cout <<i+1<< ". Nama\t: " << data[i].nama<<endl;
        cout << "   Radius\t: " << data[i].radius << endl;
        cout << "   Keliling\t: " << data[i].hasil << endl;
    }

    cout << "Kastil " << data[0].nama << " Merupakan kastil dengan tempok terpanjang" << endl;

    system("pause");
    system("cls");
}