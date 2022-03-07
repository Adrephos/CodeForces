#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int tot = 0;
	int count = 0;
	cin>>n;
	string str;
	vector<vector<char>> vec(n+2,vector<char> (n+2,'x'));
	for(int i = 1; i < n+1; i ++){
		cin>>str;
		for (int j = 1; j < n+1; j++) {
			vec[i][j] = str[j-1];
			tot++;
		}
	}
	for(int i = 1; i < n+1; i ++){
		for (int j = 1; j < n+1; j++) {
			int aux = 0;
			if(vec[i][j+1] == 'o'){
				aux++;
			}	
			if(vec[i][j-1] == 'o'){
				aux++;
			}
			if(vec[i+1][j] == 'o'){
				aux++;
			}
			if(vec[i-1][j] == 'o'){
				aux++;
			}
			if(aux % 2 == 0){
				count++;
			}
		}
	}
	
	if(tot == count){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
