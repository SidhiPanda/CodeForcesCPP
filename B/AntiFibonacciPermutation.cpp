#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cout << n - i << " ";
		arr[i] = n - i;
	}

	cout << endl;

	for(int i = n - 1; i > 0; i--){
		int temp = arr[i];
		arr[i] = arr[i - 1];
		arr[i - 1] = temp;

		for(int j = 0; j < n; j++){
			cout << arr[j] << " ";
		}

		cout << endl;
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