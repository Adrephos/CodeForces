#include <bits/stdc++.h>
#include <iostream>
#include <vector>
 
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
	vector<int> aux;
 
	for(int i = 0; i < n; i++){
		int num = tot - vec[i];
		if(find(aux.begin(), aux.end(), i+1) != aux.end()){
			continue;
		}else{
			for(int j = i+1; j < n; j++){
				if(vec[j] == num){
					if(vec[i] > vec[j]){
						cout<<j+1<<" "<<i+1<<endl;
						aux.push_back(j+1);
						aux.push_back(i+1);
						break;
					}else {
						cout<<i+1<<" "<<j+1<<endl;
						aux.push_back(i+1);
						aux.push_back(j+1);
						break;
					}
					
				}
			}
		}
	}
	
}
