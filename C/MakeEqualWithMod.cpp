#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int arr[n];

	bool one = false;

	for(int i = 0; i < n; i++){

		cin >> arr[i];

		if(arr[i] == 1){

			one = true;
		}
	}

	sort(arr, arr + n);

	bool consecutive = false;

	for(int i = 0; i < n - 1; i++){

		if(arr[i + 1] - arr[i] == 1){

			consecutive = true;
		}
	}

	if(one and consecutive){

		cout << "NO" << endl;;
	}

	else{

		cout << "YES" << endl;
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