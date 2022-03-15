#include <bits/stdc++.h>

using namespace std;

int main(){
	int testC;
	cin>>testC;
	char c;
	string s;
	vector<string> vec;
	for(int i = 0; i < testC; i++){
		int par = 0;
		int impar = 0;
		cin>>s;
		cin>>c;
		for(int j = 0;j < s.size();j++){
			if(s[j] == c){
				if((j+1)%2 == 0){
					par++;
				}else {
					impar++;
				}
			}
		}	
		if(par == 0 && impar ==0){
			vec.push_back("NO");
		}else if(impar > 0){
			vec.push_back("YES");
		}else{
			vec.push_back("NO");
		}
	}
	for (int i = 0; i < vec.size();i++) {
		cout<<vec[i]<<endl;
	}
}
