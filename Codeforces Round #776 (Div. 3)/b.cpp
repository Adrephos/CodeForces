#include <bits/stdc++.h>

using namespace std;

int vlad(int l, int r, int a){
	int op = r%a;

	int ans = floor(r/a) + op;

	r -= op + 1;

	if(r >= l){
		int c = ans;
		int v = floor(r/a) + r%a;
		ans = max(c, v);
	}

	return ans;
}

int main(){
	int testC;
	int l, r, a;

	vector<int> vec;

	cin>> testC;
	
	for(int i = 0; i < testC; i ++){

		cin>> l >> r >> a;
		vec.push_back(vlad(l, r, a));
	}
	for(int i = 0; i < vec.size(); i++){
		cout<<vec[i]<<endl;
	}
	
}
