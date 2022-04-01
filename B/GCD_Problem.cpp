#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	if(n % 2 == 0){

		cout << (n - 3) << " " << 2 << " " << 1 << endl;
	}

	else{

		if(n % 4 == 1){

			cout << (n / 2 + 1) << " " << (n / 2 - 1) << " " << 1 << endl;
		}

		else{

			cout << (n / 2 + 2) << " " << (n / 2 - 2) << " " << 1 << endl;
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