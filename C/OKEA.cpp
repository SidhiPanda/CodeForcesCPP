#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >> n >> k;

	if(k == 1){
		cout << "YES" << endl;

		for(int i = 1; i <= n; i++){
			cout << i << endl; 
		}
	}

	else if(n % 2 != 0){
		cout << "NO" << endl;
	}

	else{
		cout<< "YES" << endl;

		for(int i = 0; i < n / 2; i++){
			for(int j = 0; j < k; j++){
				cout << 2 * (i * (k + 1) + (j + 1)) - 1 << " ";
			}
			cout << endl;
		}

		for(int i = 0; i < n / 2; i++){
			for(int j = 0; j < k; j++){
				cout << 2 * (i * (k + 1) + (j + 1)) << " ";
			}
			cout << endl;
		}
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