/*compilers and parsers*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin >> casos;

	string linea;

	while(casos--){

		cin>>linea;

		stack <char> parsers;
		
		int tot = 0;
		int aux = 0;

		for (int i = 0; i < linea.size(); ++i){
			
			if(linea[i] == '<')
				parsers.push('<');
			else{
				if(! parsers.empty()){
					parsers.pop();
					aux += 2;

					if(parsers.empty()){
						tot += aux;
						aux = 0;
					}
				}
				else{
					break;
				}
			}

		}

		cout<< tot <<'\n';
	}

	return 0;
}