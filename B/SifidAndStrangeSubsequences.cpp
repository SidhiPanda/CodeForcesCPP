#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	int a[n];
	int zNeg = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];

		if(a[i] <= 0){
			zNeg++;
		}
	}

	sort(a, a + n);
	
	if(zNeg == 0){
		if(a[0] >= (a[1] - a[0])){
			cout << 1 << endl;
		}

		else{
			cout << 0 << endl;
		}
	}

	else{
		
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