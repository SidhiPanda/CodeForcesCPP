#include<bits/stdc++.h>
using namespace std;

void solve(){

	string str;
	cin >> str;

	int r = str.find('r');
	int R = str.find('R');

	int g = str.find('g');
	int G = str.find('G');

	int b = str.find('b');
	int B = str.find('B');

	if(r < R and g < G and b < B){
		cout << "YES" << endl;
	}

	else{
		cout << "NO" << endl;
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