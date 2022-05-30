#include <iostream>

using namespace std;


void icibosDortgen(int satir,int sutun);

int main() {

	int satir, sutun;
	
	cout << "Lutfen satir ve sutun sayisini belirleyiniz"<<endl;
	cout << "Girdiginiz sayilar 2'den buyuk olsun "<<endl ;

	cout << "\n";
	
	baslat:
	cout << "Satir Sayisi: ";
	cin >> satir;

	cout << "\n";

	cout << "Sutun Sayisi: ";
	cin >> sutun;

	cout << "\n"<<endl;

	if (satir <= 2 || sutun <= 2) 
	{
		cout << "2'DEN KUCUK SAYI GIRDINIZ!!" << endl;
		cout << "\n";
		cout << "Tekrar Deneyin" << endl;
		cout << "\n";
		goto baslat;
	}

	cout << "\n";

	icibosDortgen(satir,sutun);

	return 0;
}
 
void icibosDortgen(int satir,int sutun) 
{
	for (int x = 1; x <= satir; x++) {

		for (int y = 1; y <= sutun; y++) {

			
				if (x >= 2 && y>1 && x <= satir - 1 && y<sutun)
				{
					cout << " ";
				}
		
			else {
				cout << "*";
			}
		}
		cout << "\n";
    }                  	              
}

