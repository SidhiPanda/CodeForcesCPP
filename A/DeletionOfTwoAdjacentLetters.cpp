#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;

	char c;
	cin >> c;

	bool ans = false;

	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == c and i % 2 == 0)
		{
			ans = true;
			break;
		}
	}

	cout << (ans ? "YES" : "NO") << endl;
	
}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}