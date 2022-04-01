#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int arr[n];

	for(int i = 0; i < n; i++){

		cin >> arr[i];
	}

	if(n == 1){

		cout << "1 1" << endl;
	}

	else{

		int minv = arr[0];
		int maxv = arr[0];

		int mini = 1;
		int maxi = 1;

		for(int i = 1; i < n; i++){

			if(arr[i] < minv){

				minv = arr[i];
				mini = i + 1;
			}

			if(arr[i] > maxv){

				maxv = arr[i];
				maxi = i + 1;
			}
		}

		cout << mini << " " << maxi << endl;
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