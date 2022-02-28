#include <bits/stdc++.h>
#include <cstdint>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n][3];
	int m;
	int l = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin>>m;
			arr[i][j] = m;
		}
	}
	for(int i = 0; i < n; i++){
		int num = 0;
		for(int j = 0; j < 3; j++){
			if(arr[i][j] == 1){
				num += 1;
			}
		}
		if(num >= 2){
			l += 1;
		}
	}
	cout<<l<<endl;
}
