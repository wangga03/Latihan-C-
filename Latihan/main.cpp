#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct data_customer {

    string uname, pass;

}data;

int regist(){

    cout << "regist" << endl;
    fstream registrasi;
    registrasi.open("customer.bin",ios::out|ios::binary);
    cout << "Username : " ; cin >> data.uname;
    cout << "Password : " ; cin >> data.pass;

    registrasi.write(reinterpret_cast<char*>(&data), sizeof(data));

    registrasi.close();

}

int login(){

    cout << "login" << endl;
    fstream registrasi;
    registrasi.open("customer.bin",ios::in|ios::binary);

    for(char*data)

    registrasi.read(reinterpret_cast<char*>(&data), sizeof(data));



}


int main() {

    int opsi;

    cout << "Program Laundry" << endl;
    cout << "Menu : " << endl;
    cout << "\t1. Login\n\t2. Registrasi"<< endl;
    cout << "> ";
    cin >> opsi;

    switch (opsi)
    {
    case 1:
        login();
        system("pause");
        system("cls");
        main();
        break;
    case 2:
        regist();
        system("pause");
        system("cls");
        main();
        break;
    
    default:
        break;
    }

}