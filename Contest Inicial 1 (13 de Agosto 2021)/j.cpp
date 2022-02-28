#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int m = n/2;
	int temp;
	vector<int> vec;
	int sum = 0;
 
	for(int i = 0; i < n; i++){
		cin>>temp;
		vec.push_back(temp);
		sum += temp;
	}
 
	int tot = sum/m;
	int aux = -1;
 
	for(int i = 0; i < n; i++){
		if(i != aux){
			int num = tot - vec[i];
			for(int j = i+1; j < n; j++){
				if(vec[j] == num){
					if(vec[i] > vec[j]){
						cout<<j+1<<" "<<i+1<<endl;
						aux = j;
						break;
					}else {
						cout<<i+1<<" "<<j+1<<endl;
						aux = j;
						break;
					}
				}
			}
		}
	}
}
