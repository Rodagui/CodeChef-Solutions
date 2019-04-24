/*the minimum number of moves*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;
	int workers;

	cin >> cases;
	int cont, aux;
	int mayor, menor;
	int dif, indice;

	while(cases--){
		cont = 0;
		menor = 100002;
		mayor = -1;

		cin>> workers;
		vector <int> arr(workers);

		for (int i = 0; i < workers; ++i){
			
			cin >> arr[i];

			if(arr[i] < menor)
				menor = arr[i];

			if( arr[i] > mayor){
				mayor = arr[i];
				indice = i;
			}
			
		}

		while(menor != mayor){
			 dif = mayor - menor;

			 menor = 1000002;

			 for (int i = 0; i < workers; ++i)
			 {
			 	if( i != indice)
			 		arr[i] += dif;

			 	if(arr[i] > mayor){
			 		mayor = arr[i];
			 		aux = i;
			 	}

			 	if(arr[i] < menor)
			 		menor = arr[i];
			 	
			 }

			 indice = aux;

			 cont+= dif;
		}

		

		
		cout<<cont<<'\n';
	}

	return 0;
}