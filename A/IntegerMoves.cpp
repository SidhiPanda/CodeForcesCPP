#include<bits/stdc++.h>
using namespace std;

void solve(){

	int x, y;
	cin >> x >> y;

	if(x == 0 and y == 0){

		cout << "0" << endl;
	}

	else{

		int d = x * x + y * y;

		int r = sqrt(d);

		if(r * r == d){

			cout << "1" << endl;
		}

		else{

			cout << "2" << endl;
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