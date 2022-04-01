#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;

	long long int x, y;
	cin >> n >> x >> y;

	long long int z = x;

	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;

		if(temp <= z){
			x = x + temp;
		}

		else{
			x = x ^ temp;
		}
	}
	
	if(x == y){
		cout << "Alice" << endl;
	}

	else{
		cout << "Bob" << endl;
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