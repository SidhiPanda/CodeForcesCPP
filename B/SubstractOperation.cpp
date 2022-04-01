#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >> n >> k;


	int arr[n];

	for(int i = 0; i < n; i++){

		cin >> arr[i];
	}

	if(n == 1){

		cout << (arr[0] == k ? "YES" : "NO") << endl;
	}

	else{

		sort(arr, arr + n);

		int i = 0, j = 1;

		while(i < n and j < n){

			if(arr[i] + abs(k) == arr[j]){

				cout << "YES" << endl;
				return;
			}

			else if(arr[i] + abs(k) < arr[j]){

				i++;
			}

			else{

				j++;
			}
		}

		cout << "NO" << endl;
	}


}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}