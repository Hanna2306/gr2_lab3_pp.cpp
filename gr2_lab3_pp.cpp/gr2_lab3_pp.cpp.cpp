#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   //zadanie 1
	/*   int a, b;
	cout << "Podaj dwie liczby calkowite: " << endl;
	cin >> a >> b;

	if (a == b)
		cout << "a i b sa rowne " << endl;
	else if (a > b)
		cout << "a = " << a << " jest wieksze od b = "<< b << endl;
	else
		cout << "b = " << b << " jest wieksze od a = " << a << endl;   */

	//zadanie 2
	/* int a, b;
	cout << "Podaj dwie liczby calkowite: " << endl;
	cin >> a >> b;

	if (a == b)
		cout << "a i b sa rowne " << endl;
	if (a > b)
		cout << "a jest wieksze od b " << endl;
	else
		cout << "b jest wieksze od a " << endl;  */


	//zadanie 3

	 /* float r;
	cout << "Podaj wspolczynnik r: " << endl;
	cin >> r;

	if (r <= 1 && r >= 0.7)
		cout << "Podany wspolczynnik ma bardzo wysoka korelacje dodatnia. " << endl;
	else if (r < 0.7 && r >= 0.5)
		cout << "Podany wspolczynnik ma silna korelacje dodatnia. " << endl;
	else if (r < 0.5 && r >= 0.3)
		cout << "Podany wspolczyninik ma umiarkowana korelacje dodatnia. " << endl;
	else if (r < 0.3 && r >=0.2)
		cout << "Podany wspolczynnik ma slaba korelacje dodatnia. " << endl;
	else if (r <0.2 && r >= 0)
		cout << "Brak korelacji dodatniej. " << endl; */
	


	//zadanie 4
	/*
	float a, b;
	char c;

	cout << "Podaj dwie liczby: " << endl;
	cin >> a >> b;

	cout << "Podaj znak pozadanego dzialania: " << endl;
	cin >> c;

	if (c == '/' && b == 0)
		cout << "Dzialanie nie może zostac wykonane. Nie dzielimy przez zero!" << endl;
	else {
		switch (c) {
		case '+':
			cout << "Wynik podanego dzialania to: " << a + b << endl;
			break;
		case '-':
			cout << "Wynik podanego dzialania to: " << a - b << endl;
			break;
		case '*':
			cout << "Wynik podanego dzialania to: " << a * b << endl;
			break;
		case '/':
			cout << "Wynik podanego dzialania to: " << a / b << endl;
			break;
		default:
			cout << "Podano nieprawidlowy znak. " << endl;

		}
	}
	*/


	//zadanie 5

	/*bool x = true;
	while (x) {

	}*/


	//zadanie 6
	/*char wybor;
	float a, b;
	char c;
	while (1) {
		cout << "Podaj dwie liczby: " << endl;
		cin >> a >> b;

		cout << "Podaj znak pozadanego dzialania: " << endl;
		cin >> c;

		if (c == '/' && b == 0)
			cout << "Dzialanie nie może zostac wykonane. Nie dzielimy przez zero!" << endl;
		else {
			switch (c) {
			case '+':
				cout << "Wynik podanego dzialania to: " << a + b << endl;
				break;
			case '-':
				cout << "Wynik podanego dzialania to: " << a - b << endl;
				break;
			case '*':
				cout << "Wynik podanego dzialania to: " << a * b << endl;
				break;
			case '/':
				cout << "Wynik podanego dzialania to: " << a / b << endl;
				break;
			default:
				cout << "Podano nieprawidlowy znak. " << endl;

			}
		}
		cout << "Czy kalkulator ma zakonczyc dzialanie?. Odpowiedz TAK lub NIE: " << endl;
		cin >> wybor;
		if(wybor == 'TAK')
		re
	}*/


	//zadanie 7

/* bool x = true;
int i = 0;
while (x) {
	if (i == 200)
		x = false;

	if (i % 2 != 0)
		cout << i << endl;
	
	i++;
	
}*/


	//zadanie 8
	/*int n;
		cout << "Podaj n: " << endl;
		cin >> n;
		int dzielnik = 2;
		

		while (dzielnik >= 2 && dzielnik <= sqrt(n)) {
			if (n % dzielnik == 0) {
				cout << dzielnik << " jest najmnijeszym dzielnikiem liczby n wiekszym od 2 " << endl;
				break;
			}
			else
				dzielnik = dzielnik + 1;
		} */
		


	return 0;
}

