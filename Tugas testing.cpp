#include <iostream>

using namespace std;

int main(){
	cout <<"Angka Bilangan Genap 1-20 :"<<endl;
	int angka = 1;
	cout <<"[ ";
	while( angka <=20 ){
		
		if (angka % 2 == 0 ){
			cout << angka;
			
			if (angka < 20){
				cout <<", ";
			}
		}
		
		angka ++;
	}
	cout << " ]";
}
