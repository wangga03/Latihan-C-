#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Tinggi segitiga : "; cin>>y;
    if (y%2 == 0)
    {
        y++;
    }

    y = y/2+1;
    
    for (int i = 0; i < y; i++)
    {
    
        for (int k = 1; k < y - i ; k++)
        {
            cout<< " ";
        }
        for (int j = i; j >=0 ; j--)
        {
            if (y>4)
            {
                if ((j <= i && j >= i - 1) || (j >= 0 && j<=1))cout<< "* ";
                else cout<<"  ";
            }else{
                if ((j == i) || (j == 0))cout<< "* ";
                else cout<<"  ";
            }
            
        }
        cout << " "<<endl;
        
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = i; j >= 0 ; j--)
        {
            cout << " ";
        }
        
        for (int k = 1; k < y - i; k++)
        {
            if (y > 4)
            {
                if ((k<=2 && k>=1) || (k<=y-i-1 && k>=y-i-2)) cout << "* ";
                else cout<<"  ";
            }else{
                if ((k==1) || (k==y-i-1)) cout << "* ";
                else cout<<"  ";
            }
            
        }

        cout << " "<<endl;
        
    }
    
    return 0;
}