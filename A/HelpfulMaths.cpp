#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;

	int n = (s.size() + 1) / 2;

	int arr[n];

	int c = 0;

	for(int i = 0; i < s.size(); i = i + 2){

		arr[c] = s[i];
		c++;
	}

	sort(arr, arr + n);

	c = 0;

	for(int i = 0; i < s.size(); i = i + 2){

		if(i != s.size() - 1){

			s[i] = arr[c];
			s[i + 1] = '+';
			c++;
		}

		else{

			s[i] = arr[c];
		}
	}

	cout << s << endl;

	return 0;
}