#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;

	int c1 = 0;
	int c2 = 0;

	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;

		if(x < 0){
			c1++;
		}

		else if(x > 0){
			c2++;
		}
	}

	if(c1 < 2 or c2 < 2){
		cout << "Yes" << endl;
	}

	else{
		cout << "No" << endl;
	}

	return 0;
}