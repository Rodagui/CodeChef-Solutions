/*Cops and the Thief Devu*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases, speed, minutes, H, rango;

	cin >> cases;

	while(cases--){

		cin >> H >> speed >> minutes;

		rango = minutes * speed;
		int aux;

		vector <int> houses(H);
		vector <int> cops(101);
		vector < vector <int> > limites(H, vector <int> (2));

		for (int i = 0; i < H; ++i){
			
			cin >> houses[i];
			aux = houses[i] - rango;

			if(aux <= 1)
				aux = 1;

			limites[i][0] = aux;

			aux = houses[i] + rango;

			if(aux > 100)
				aux = 100;

			limites[i][1] = aux;
		}



		sort(limites.begin(), limites.end());
		int ini, fin;
		
		for (int i = 0; i < H; ++i){
			
			ini = limites[i][0];
			fin = limites[i][1];

			if( i == 0){

				for (int j = ini; j <= fin; ++j){
					cops[j] = 1;
				}
			}
			else{

				if(ini < limites[i-1][1])
					ini = limites[i-1][1];

				for (int j = ini; j <= fin; ++j){
					cops[j] = 1;
				}

			}

			if(cops[100] == 1)
				break;

		}

		int tot = 0;

		for (int i = 1; i < 101; ++i)
		{
			if(cops[i] == 0)
				tot++;
		}

		cout<<tot<<'\n';


	}

	return 0;
}