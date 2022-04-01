#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long int n;
	long long int s;
	cin >> n >> s;

	long long int ans = s / (n * n);

	cout << ans << endl;
}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}