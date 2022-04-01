#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int cost = 0;
	int flag = 0;

	for(int i = 0; i < n; i++){

		int temp;
		cin >> temp;

		if(temp == 1){

			if(i - flag == 1){
				flag++;
			}

			else{
				cost += i - flag;
				flag = i;
			}
		}
	}

	cout << cost << endl;
	
}

int main(){
	
	int t;
	cin >> t;

	while(t--){

		solve();

	}

	return 0;
}