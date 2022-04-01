#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<int> index;

	for(int i = 0; i < n; i++){

		if(s[i] == '2'){

			index.push_back(i);
		}
	}

	if(index.size() == 1 or index.size() == 2){

		cout << "NO" << endl;
		return;
	}

	vector<string> str(n, string(n, '='));

	for(int i = 0; i < n; i++){

		str[i][i] = 'X';
	}

	for(int i = 0; i < index.size(); i++){

		int x = index[i];
		int y = index[(i + 1) % index.size()];

		str[x][y] = '+';
		str[y][x] = '-';
	}

	cout << "YES" << endl;
	for(int i = 0; i < n; i++){

		cout << str[i] << endl;
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