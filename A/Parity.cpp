#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int b, k;
	cin >> b >> k;

	int a[k];
	for(int i = 0; i < k; i++){
		cin >> a[i];
	}

	int n = 0;
	int p = 1;

	for(int i = k - 1; i >=0; i--){
		n += a[i] * p;
		p *=b;
	}

	if(n % 2 == 0){
		cout << "even" << endl;
	}

	else{
		cout << "odd" << endl;
	}

	return 0;
}