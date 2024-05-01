#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char cari;
    char kaliamat[50] = "Fight for Glory, Create Your Story";
    int i = 0, panjang = strlen(kaliamat), j = 0;
    cout << "Kalimat yang dicari : "; cin >> cari;
    while (i<panjang)
    {
        if (cari == kaliamat[i]){
            j++;
        }
        i++;
    }

    cout << "Huruf " << cari << " ada " << j << endl;
    

}