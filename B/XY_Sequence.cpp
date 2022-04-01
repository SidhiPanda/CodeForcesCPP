#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long int n, B, x, y;

	cin >> n >> B >> x >> y;

	long long int curr = 0;

	long long int ans = 0;

	for(long long int i = 0; i < n; i++){

		if(curr + x <= B){

			curr += x;
			ans += curr;
		}

		else{

			curr -= y;
			ans += curr;
		}
	}

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