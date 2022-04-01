#include<bits/stdc++.h>
using namespace std;

void solve(){


	
}

int main(){
								
	int t;
	cin >> t;

	while(t--){

		long long int factArr[15];

		factArr[0] = 1;

		for(int i = 1; i < 15; i++){

			factArr[i] = factArr[i - 1] * (i + 1);
		}

		solve(factArr, );

	}

	return 0;
}