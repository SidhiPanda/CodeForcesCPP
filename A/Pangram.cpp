#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >>n;

	string str;
	cin >> str;

	int arr[26] = {0};

	for(int i = 0; i < n; i++){

		if(str[i] >= 'a' and str[i] <= 'z'){

			arr[str[i] - 'a']++;
		}

		else if(str[i] >= 'A' and str[i] <= 'Z'){

			arr[str[i] - 'A']++;
		}
	}

	int flag = 0;

	for(int i = 0; i < 26; i++){

		if(arr[i] == 0){

			flag = 1;
			break;
		}
	}

	cout << ((flag == 0) ? "YES" : "NO") << endl;

	return 0;
}