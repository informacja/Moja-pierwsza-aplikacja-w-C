#include <iostream>
#include <Windows.h>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Szybkie komentowanie Ctrl + Slash (/)

using namespace std;

int main(int argc, char** argv) {
 
	//system("chcp 1250 & cls");
	system("chcp 1250");		// polskie znaki
	system("cls");
	
	std::cout << "Du¿y czarny napis\n";
	
	bool p = true;				// true or false
	
	char r = 'A' ;				// od -128 do 127
	unsigned char R = 255 ;		// od 0 do 255
	 
	int x = 3, y = 2;				// ca³kowita	
	double z = 0, w;			// zmiennoprzecinkowa
	
	// deklaracja
	string a;
	
	// definicja
	a = "Jestem stringiem";	
	
	cout << "z = " << z << endl;
	cout << "y = " << y << endl;
	
	cout << r << endl;
	cout << (int)r << endl;
	
	int suma = x + y;
	
	cout << "Suma = " << suma << endl;
	cout << "Wyœwietlam zmienn¹ a = \"" << a << "\"\n";
	
// --------------------------------------
	
	bool c, d;
	
	cout << "Podaj 1 lub 0\n" ;
	cin >> c;
	
	if ( c == true )
	{
		cout << "Koniec programu";
		Sleep ( 1000 );
	}
	else if ( c != true )
	{
		cout << "Zmienna c = 0 ";
	}
	else ; // nie rób nic	

	return 0;
}
