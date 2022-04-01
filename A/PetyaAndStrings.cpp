#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	for(int i = 0; i < s1.length(); i++){

		if(s1[i] >= 'a' and s1[i] <= 'z'){

			s1[i] -= 32;
		}

		if(s2[i] >= 'a' and s2[i] <= 'z'){

			s2[i] -= 32;
		}

		if(s1[i] > s2[i]){

			cout << 1 << endl;
			return 0;
		}

		else if(s1[i] < s2[i]){

			cout << -1 << endl;
			return 0;
		}
	}

	cout << 0 << endl;

	return 0;
}