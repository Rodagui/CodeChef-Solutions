/*Little elephant and Candies*/

#include <iostream>

using namespace std;


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;
	int elephant;
	long long candies;
	long long need;
	long long in;

	cin>>cases;

	while(cases--){

		cin >> elephant >> candies;

		need = 0;

		for (int i = 0; i < elephant; ++i){
			cin >> in;

			need+= in;
		}

		if(need <= candies)
			cout << "Yes\n";
		else
			cout << "No\n";


	}



	return 0;
}