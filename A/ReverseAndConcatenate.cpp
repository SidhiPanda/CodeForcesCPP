#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >>n >> k;

	string s;
	cin >> s;

	if(k == 0){
		cout << 1 << endl;
		return;
	}

	else{

		int m = n / 2;

		string s1, s2;

		s1 = s.substr(0, m);

		if(n % 2 == 0){
			s2 = s.substr(m, m);
		}

		else{
			s2 = s.substr(m + 1, m);
		}

		reverse(s2.begin(), s2.end());

		if(s1 == s2){
			cout << 1 << endl;
		}

		else{
			cout << 2 << endl;
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