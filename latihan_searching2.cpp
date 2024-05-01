#include <iostream>
#include <cstring>
using namespace std;

struct latihan
{
    string nama, role, grade;
};

int main(){

    int banyak;
    cout << "Banyak hero : "; cin >> banyak;
    string cari_role, cari_grade;
    struct latihan data[banyak];

    for (int i = 0; i < banyak; i++)
    {
        cout << i+1 << ". Nama : "; cin >> data[i].nama;
        cout <<"   Role : "; cin >> data[i].role;
        cout <<"   Grade : "; cin >> data[i].grade;
    }

    cout << "Role yang dicari : "; cin >> cari_role; 
    cout << "Grade yang dicari : "; cin >> cari_grade; 
    int i = 0;
    while (i<banyak)
    {
        if (cari_role == data[i].role && cari_grade == data[i].grade){
            cout << i+1 << ". Nama : " << data[i].nama << endl;
            cout <<"   Role : " << data[i].role << endl;
            cout <<"   Grade : " << data[i].grade << endl;
        }
        i++;
    }
    
    return 0;
}