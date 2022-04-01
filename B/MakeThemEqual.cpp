#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
  cin >> n;

	vector<int> v;

	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;

		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	vector<int> dv = {v[0]};

  for(int i = 1; i < n; i++){
    if(v[i] != v[i - 1]){
      dv.push_back(v[i]);
      }
  }

  if(dv.size() == 1){
    cout << 0 << endl;
  }

  else if(dv.size() == 2){
  	if((dv[0] + dv[1]) % 2 == 0){
  		cout << (dv[1] - dv[0]) / 2 << endl;
  	}

  	else{
  		cout << dv[1] - dv[0] << endl;
  	}
  }

  else if(dv.size() == 3){
  	if((dv[1] - dv[0]) == (dv[2] - dv[1])){
  		cout << dv[1] - dv[0] << endl;
  	}

  	else{
  		cout << -1 << endl;
  	}
  }

  else{
  	cout << -1 << endl;
  }

	return 0;
}