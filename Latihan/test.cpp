#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp;
    int pilihan, pilihan2;
	string kota[5]={ "Jakarta", "Bogor", "Depok", "Tangerang", "Bekasi" },
	kecamatan[25]={"Tanah Abang", "Duren Sawit", "Tanjung Priok", "Pasar Minggu", "Kebon Jeruk",
	"Cibinong", "Jonggol", "Bojong Gede", "Cileungsi", "Cisarua", 
	"Cimanggis", "Cipayung", "Tapos", "Cinere", "Bojongsari",
	"Benda", "Tangerang", "Jatiuwung", "Ciledug", "Karawaci",
	"Babelan", "Cibitung", "Cikarang Timur", "Setu", "Tambun Selatan"};
	KotaTujuan:
	cout<<"===============SELAMAT DATANG DI BARAYA TRAVEL==============="<<endl;
	cout<<"****Solusi Dari Masalah Perjalanan Anda****"<<endl;
	cout<<"Mau kemana kamu?"<<endl;
	cout<<"(Ketik pilihan kamu)"<<endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i -1; j++)
        {
            if(kota[j]>kota[j+1]){

                temp = kota[j];
                kota[j] = kota[j+1];
                kota[j+1] = temp;

            }
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<". " << kota[i]<<endl;
    }

	cout<<"Pilih salah satu : ";
	cin>>pilihan;
	cout<<endl;

    switch (pilihan)
    {
    case 1:
        cout << "Mau ke kecamatan apa?"<<endl;
        cout<<"(Ketik pilihan kamu)"<<endl;
        cout << "1. Tanah Abang"<<endl;
        cout << "2. Duren Sawit"<<endl;
        cout << "3. Tanjung Priok"<<endl;
        cout << "4. Pasar Minggu"<<endl;
        cout << "5. Kebon Jeruk"<<endl;
        cout << "6. Kembali"<<endl;
        cout << "Pilih salah satu : ";
        cin>>pilihan2;
        cout<<endl;  
        break;
    
    case 2:
        cout << "Mau ke kecamatan apa?"<<endl;
		cout<<"(Ketik pilihan kamu)"<<endl;
		cout << "1. Cibinong"<<endl;
        cout << "2. Jonggol"<<endl;
        cout << "3. Bojong Gede"<<endl;
        cout << "4. Cileungsi"<<endl;
        cout << "5. Cisarua"<<endl;
        cout << "6. Kembali"<<endl;
        cout << "Pilih salah satu : ";
        cin>>pilihan2;
        cout<<endl;  
        break;
    
    case 3:
        cout << "Mau ke kecamatan apa?"<<endl;
		cout<<"(Ketik pilihan kamu)"<<endl;
		cout<< "1. Cimanggis"<<endl;
        cout<< "2. Cipayung"<<endl;
        cout<< "3. Tapos"<<endl;
        cout<< "4. Cinere"<<endl;
        cout<< "5. Bojongsari"<<endl;
        cout<< "6. Kembali"<<endl;
        cout<< "Pilih salah satu : ";
        cin>>kecamatan[25];
        cout<<endl;  
        break;

    case 4:
        cout << "Mau ke kecamatan apa?"<<endl;
		cout<<"(Ketik pilihan kamu)"<<endl;
		cout<< "1. Benda"<<endl;
        cout<< "2. Tangerang"<<endl;
        cout<< "3. Jatiuwung"<<endl;
        cout<< "4. Ciledug"<<endl;
        cout<< "5. Karawaci"<<endl;
        cout<< "6. Kembali"<<endl;
        cout<< "Pilih salah satu : ";
        cin>>kecamatan[25];
        cout<<endl; 
        break;
    
    case 5:
        cout<< "Mau ke kecamatan apa?"<<endl;
        cout<<"(Ketik pilihan kamu)"<<endl;
        cout<< "1. Babelan"<<endl;
        cout<< "2. Cibitung"<<endl;
        cout<< "3. Cikarang Timur"<<endl;
        cout<< "4. Setu"<<endl;
        cout<< "5. Tambun Selatan"<<endl;
        cout<< "6. Kembali"<<endl;
        cout<< "Pilih salah satu : ";
        cin>>kecamatan[25];
        cout<<endl; 
        break;
    
    default:
        break;
    }
	
// 	if (kota[5]=="Jakarta"){
// 	cout << "Mau ke kecamatan apa?"<<endl;
// 	cout<<"(Ketik pilihan kamu)"<<endl;
// 	cout << "1. Tanah Abang"<<endl;
//     cout << "2. Duren Sawit"<<endl;
//     cout << "3. Tanjung Priok"<<endl;
//     cout << "4. Pasar Minggu"<<endl;
//     cout << "5. Kebon Jeruk"<<endl;
//     cout << "6. Kembali"<<endl;
//     cout << "Pilih salah satu : ";
//     cin>>kecamatan[25];
//     cout<<endl;  
    
// 	} else if (kota[5]=="Bogor"){
// 		cout << "Mau ke kecamatan apa?"<<endl;
// 		cout<<"(Ketik pilihan kamu)"<<endl;
// 		cout << "1. Cibinong"<<endl;
//         cout << "2. Jonggol"<<endl;
//         cout << "3. Bojong Gede"<<endl;
//         cout << "4. Cileungsi"<<endl;
//         cout << "5. Cisarua"<<endl;
//         cout << "6. Kembali"<<endl;
//         cout << "Pilih salah satu : ";
//         cin>>kecamatan[25];
//         cout<<endl;
	
// 	} else if (kota[5]=="Depok"){
// 		cout << "Mau ke kecamatan apa?"<<endl;
// 		cout<<"(Ketik pilihan kamu)"<<endl;
// 		cout<< "1. Cimanggis"<<endl;
//         cout<< "2. Cipayung"<<endl;
//         cout<< "3. Tapos"<<endl;
//         cout<< "4. Cinere"<<endl;
//         cout<< "5. Bojongsari"<<endl;
//         cout<< "6. Kembali"<<endl;
//         cout<< "Pilih salah satu : ";
//         cin>>kecamatan[25];
//         cout<<endl;
		
//     }else if (kota[5]=="Tangerang"){
// 		cout << "Mau ke kecamatan apa?"<<endl;
// 		cout<<"(Ketik pilihan kamu)"<<endl;
// 		cout<< "1. Benda"<<endl;
//         cout<< "2. Tangerang"<<endl;
//         cout<< "3. Jatiuwung"<<endl;
//         cout<< "4. Ciledug"<<endl;
//         cout<< "5. Karawaci"<<endl;
//         cout<< "6. Kembali"<<endl;
//         cout<< "Pilih salah satu : ";
//         cin>>kecamatan[25];
//         cout<<endl;
  
// 	} else if (kota[5]=="Bekasi"){
//         cout<< "Mau ke kecamatan apa?"<<endl;
//         cout<<"(Ketik pilihan kamu)"<<endl;
//         cout<< "1. Babelan"<<endl;
//         cout<< "2. Cibitung"<<endl;
//         cout<< "3. Cikarang Timur"<<endl;
//         cout<< "4. Setu"<<endl;
//         cout<< "5. Tambun Selatan"<<endl;
//         cout<< "6. Kembali"<<endl;
//         cout<< "Pilih salah satu : ";
//         cin>>kecamatan[25];
//         cout<<endl;

// }
cout<<"=============================================================================================================="<<endl;
cout<<endl;
KotaBerangkat:
cout<<"Kamu berangkat darimana?"<<endl;
cout<<"(Ketik pilihan kamu)"<<endl;
cout<<"1. Jakarta"<<endl;
cout<<"2. Bogor"<<endl;
cout<<"3. Depok"<<endl;
cout<<"4. Tangerang"<<endl;
cout<<"5. Bekasi"<<endl;
cout<<"Pilih salah satu : ";
cin >>kota[5];
cout<<endl;

	if (kota[5]=="Jakarta"){
	cout<< "Mau dari kecamatan apa?"<<endl;
	cout<<"(Ketik pilihan kamu)"<<endl;
	cout << "1. Tanah Abang"<<endl;
    cout<< "2. Duren Sawit"<<endl;
    cout<< "3. Tanjung Priok"<<endl;
    cout<< "4. Pasar Minggu"<<endl;
    cout<< "5. Kebon Jeruk"<<endl;
    cout<< "6. Kembali"<<endl;
    cout<< "Pilih salah satu : ";
    cin>>kecamatan[25];
    cout<<endl;    
	} else if (kota[5]=="Bogor"){
	cout<< "Mau dari kecamatan apa?"<<endl;
	cout<<"(Ketik pilihan kamu)"<<endl;
	 cout << "1. Cibinong"<<endl;
    cout<< "2. Jonggol"<<endl;
    cout<< "3. Bojong Gede"<<endl;
    cout<< "4. Cileungsi"<<endl;
    cout<< "5. Cisarua"<<endl;
    cout<< "6. Kembali"<<endl;
    cout<< "Pilih salah satu : ";
    cin>>kecamatan[25];
    cout<<endl;    	
	}  else if (kota[5]=="Depok"){
	cout<< "Mau dari kecamatan apa?"<<endl;
	cout<<"(Ketik pilihan kamu)"<<endl;
	 cout<< "1. Cimanggis"<<endl;
    cout<< "2. Cipayung"<<endl;
    cout<< "3. Tapos"<<endl;
    cout<< "4. Cinere"<<endl;
    cout<< "5. Bojongsari"<<endl;
    cout<< "6. Kembali"<<endl;
    cout<< "Pilih salah satu : ";
    cin>>kecamatan[25];
    cout<<endl;    	
    }  else if (kota[5]=="Tangerang"){
	cout<< "Mau ke kecamatan apa?"<<endl;
	cout<<"(Ketik pilihan kamu)"<<endl;
	cout<< "1. Benda"<<endl;
    cout<< "2. Tangerang"<<endl;
    cout<< "2. Tangerang"<<endl;
    cout<< "3. Jatiuwung"<<endl;
    cout<< "4. Ciledug"<<endl;
    cout<< "5. Karawaci"<<endl;
    cout<< "6. Kembali"<<endl;
    cout<< "Pilih salah satu : ";
    cin>>kecamatan[25];
    cout<<endl;  
	}  else if (kota[5]=="Bekasi"){
		cout << "Mau ke kecamatan apa?"<<endl;
		cout<<"(Ketik pilihan kamu)"<<endl;
		cout<< "1. Babelan"<<endl;
    cout<< "2. Cibitung"<<endl;
    cout<< "3. Cikarang Timur"<<endl;
    cout<< "4. Setu"<<endl;
    cout<< "5. Tambun Selatan"<<endl;
    cout<< "6. Kembali"<<endl;
    cout<< "Pilih salah satu : ";
    cin>>kecamatan[25];
    cout<<endl;
}


}
