/*Chef and Rainbow Array*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;
	int nums;
	int x;

	cin >> cases;

	while(cases--){
		
		int band = 0;
		int j, i;

		cin >> nums;
		vector <int> arr(nums);	
		set <int> valors;	

		for (int i = 0; i < nums; ++i)
		{
			cin>> arr[i];
			
			if ( arr[i] > 7)
				band = 1;
			else
				valors.insert(arr[i]);
		}

		if (nums >= 13 and band == 0){
			if(arr[0] != arr[nums - 1] or arr[0] != 1){
				band = 1;
			}

			for (i = 1; i < nums / 2; ++i){
				
				j = nums - 1 - i;

				if(arr[i] != arr[j] or (arr[i] != arr[i - 1] and arr[i] != arr[i-1] + 1)){
					band = 1;
					break;
				}
			}

			if(nums % 2 == 1){
				if (arr[ nums / 2] != 7)
					band = 1;
			}
			else{
				if (arr[nums / 2] != 7 or arr[nums / 2 - 1] != 7)
					band = 1;
			}
		
		}
		else
			band = 1;
		
		if(valors.size() != 7)
			band = 1;
		
		if(band == 0)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}

	

	return 0;
}