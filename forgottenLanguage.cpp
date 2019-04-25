/*Forgotten Language*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;
	cin>>cases;

	while(cases--){

		int words, phrase, cant;

		cin>> words >> phrase;
		
		map <int, string> diccionario;
		set <string> palabras;

		string aux;
		cin.ignore();

		for (int i = 0; i < words; ++i){
			cin	>> aux;
			diccionario[i] = aux;
		}

		int numP;
		for (int i = 0; i < phrase; ++i)
		{
			cin >> numP;

			for (int j = 0; j < numP; ++j)
			{
				cin>> aux;
				palabras.insert(aux);
			}
		}
		
		for (int i = 0; i < diccionario.size(); ++i){
			
			aux = diccionario[i];
			if(i > 0)
				cout<<' ';

			if( palabras.count(aux) == 1)
				cout<<"YES";
			else
				cout<<"NO";
		}
		
		cout<<'\n';

	}

	return 0;
}