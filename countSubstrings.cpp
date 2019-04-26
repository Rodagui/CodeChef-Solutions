/*Count Substrings*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;
	int tam;
	string cadena;

	cin >> cases;

	while(cases--){

		cin >> tam;
		vector <long long> acumulado(tam);

		
		cin >> cadena;

		if(cadena[tam - 1] == '1')
			acumulado[tam-1] = 1;

		for (int i = tam - 2; i >= 0; --i){
			
			if(cadena[i] == '1')
				acumulado[i] = acumulado[i+1] + 1;
			else
				acumulado[i] = acumulado[i+1];
		}

		long long tot = 0;

		for (int i = 0; i < tam ; ++i){
			if(cadena[i] == '1')
				tot += acumulado[i];
		}

		cout << tot << '\n';

	}
	return 0;
}