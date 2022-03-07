#include <bits/stdc++.h>

using namespace std;

int main(){
	int m;
	cin>>m;
	int n;
	int s;
	vector<int> vec;
	for(int i = 0; i < m;i++){
		cin>>n;
		cin>>s;
		int a = s/(n*n);
		vec.push_back(a);
	}
	for(int i = 0; i < vec.size();i++){
		cout<<vec[i]<<endl;
	}

}
