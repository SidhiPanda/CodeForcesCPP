#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int m = n;

	while(m > 9){
		n += m / 10;
		m = m / 10 + m % 10;
	}

	cout << n << endl;
	
}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}