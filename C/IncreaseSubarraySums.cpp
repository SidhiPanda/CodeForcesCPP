#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, x;
	cin >> n >> x;

	int arr[n];
	int largest = 0;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		largest = max(largest, arr[i]);
	}

	cout << largest << " ";

	int prefix[n];
	prefix[0] = arr[0];

	for(int i = 0; i < n; i++){
		prefix[i] = prefix[i - 1] + arr[i];
	}

	for(int i = 1; i <= n; i++){

		int subarrayMax = largest;

		for(int j = 0; j < n; j++){

			int subarray = (j - i + 1) > 0 ? prefix[j] - prefix[j - i + 1] + x * i : prefix[j] + x * (j + 1);

			subarrayMax = max(subarrayMax, subarray);
		}

		cout << subarrayMax << " ";
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