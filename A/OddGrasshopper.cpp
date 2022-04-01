#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long int x, n;
	cin >> x >> n;

	int k = n % 4;

	if(x % 2 == 0){

		if(k == 1){

			cout << x - n << endl;
		}

		else if(k == 2){

			cout << x + 1 << endl;
		}

		else if(k == 3){

			cout << x + n + 1<< endl;
		}

		else{

			cout << x << endl;
		}
	}

	else{

		if(k == 1){

			cout << x + n << endl;
		}

		else if(k == 2){

			cout << x - 1 << endl;
		}

		else if(k == 3){

			cout << x - n - 1 << endl;
		}

		else{

			cout << x << endl;
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