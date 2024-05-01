#include <iostream>
#include <array>
using std::array;
using std::cout;
using std::cin;
using std::endl;

#define baris 3
#define kolom 2

int main(){
    
    array <array<int, kolom>,baris> number;
    for(array <int, kolom> &data : number){
        for (int &arr : data){
        cout << "masukkan nilai : "; cin >> arr;
        }
    }
    cout << number[1][1] << endl;
    for(array <int, kolom> data : number){
        for (int &arr : data){
        cout << arr << " ";
        }

        cout<< endl;
    }
    
}