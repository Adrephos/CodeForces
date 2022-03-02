#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int m;
	int temp;
	vector<int> resp;
	for(int i = 0; i < n; i++){
		vector<int> vec;
		cin>>m;
		for(int j = 0; j < m; j++){
			cin>>temp;
			vec.push_back(temp);
		}
		for(int k = 1; k < (vec.size()-1); k++){
			if(vec[k] != vec[k-1]){
				if(vec[k-1] == vec[k+1]){
					resp.push_back(k+1);
					break;
				}else if(vec[k] == vec[k+1]){
					resp.push_back(k);
					break;
				}
			}
			if(vec[k] != vec[k+1]){
				resp.push_back(k+2);
				break;
			}
 
		}
	}
	for(int i = 0; i < resp.size(); i++){
		cout<<resp[i]<<endl;
	}
}
