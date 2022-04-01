#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	string str;
	cin >> str;

	for(char c = 'A'; c <= 'Z'; c++){

		int first = n;
		int last = -1;

		for(int i = 0; i < n; i++){

			if(str[i] == c){

				first = min(i, first);
				last = max(i, last);
			}
		}

		for(int i = first; i <= last; i++){

			if(str[i] != c){

				cout << "NO" << endl;
				return;
			}
		}
	}

	cout << "YES" << endl;
}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}