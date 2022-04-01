#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);

	long long int sumr = 0;
	long long int sumb = arr[0];

	int r = n - 1;
	int b = 1;

	while(b < r){

		sumb += arr[b];
		sumr += arr[r];

		if(sumb < sumr){

			cout << "YES" << endl;
			return;
		}

		else{

			b++;
			r--;
		}
	}

	cout << "NO" << endl;
	
}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}