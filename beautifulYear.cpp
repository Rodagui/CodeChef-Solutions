/*A. Beautiful Year*/

#include <iostream>
using namespace std;

int main(){

	int year, a, b, c, d, aux;

	cin >> year;
	
	year++;
	aux = year;
	d = aux % 10;
	
	aux /= 10;
	b = aux % 10;

	aux /= 10;
	c = aux % 10;

	a = aux/10;

	int band = 0;

	while(a == b or a == c or a == d or b == c or b == d or c == d){

		year++;

		aux = year;
		d = aux % 10;
	
		aux /= 10;
		b = aux % 10;

		aux /= 10;
		c = aux % 10;

		a = aux/10;

	}

	cout << year << '\n';

	return 0;
}