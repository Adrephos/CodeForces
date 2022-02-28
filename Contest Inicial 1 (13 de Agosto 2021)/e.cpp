#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main(){
	int n, m;
	cin>>n;
	cin>>m;
	int p;
	vector<int> vec;
	for(int i = 0; i < n; i ++){
		cin>>p;
		vec.push_back(p);
	}
	int o = 0;
	for(int i = 0; i < vec.size(); i++){
		if(vec[i] >= vec[m-1] && vec[i] > 0){
			o++;
		}
	}
	cout<<o<<endl;
}
