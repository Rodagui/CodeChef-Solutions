/*cheff and notebooks*/

#include <iostream>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;
	int need, have, money, notebooks;
	int pages, price;

	cin >> cases;

	while(cases--){

		cin >> need >> have >> money >> notebooks;

		need -= have;
		int band = 0;

		for (int i = 0; i < notebooks ; ++i){
			
			cin>> pages >> price;

			if( pages >= need and price <= money)
				band = 1;
		}

		if( band == 0)
			cout << "UnluckyChef\n";
		else
			cout << "LuckyChef\n";

	}

	return 0;
}