// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    char nama[50];
    char nim[15];
    int uts, uas, f;
    
    cout << "Masukan Nama : ";
    cin.getline(nama,50);
    // cin.ignore('\n',256);
    cout << "Masukan NIM : ";
    cin.getline(nim,15); 
    // cin.ignore('\n',256);
    
    cout <<"Masukan nilai UTS : ";
    cin >> uts;
    // cin.ignore('\n',256);

    cout <<"Masukan nilai UAS : ";
    cin >> uas;
    // cin.ignore('\n',256);
    f = (uts*0.5) + (uas*0.5);
    
    if (f>=80 && f<=100)
    {
        cout << "\nTelah Berhasil dengan grade A dan nilai final : "<<f<<endl;
    }else if (f>=60 && f<=79)
    {
        cout<<"\nTelah Berhasil dengan grade B dan nilai final : "<<f<<endl;
    }else if (f<=60)
    {
        cout <<"\nMaaf Anda GAGAL ! dengan grade C dan nilai final : "<<f<<endl;
    }
    cout <<"Nama : "<< nama<<endl;
    cout<<"NIM : "<< nim<<endl;
    cout<<"Nilai Akhir : "<< f<<endl;
}