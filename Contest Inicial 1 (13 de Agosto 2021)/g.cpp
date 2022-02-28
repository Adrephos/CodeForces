#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string str;
	cin>>str;
	int count = 0;
	int n = str.size();
	for(int i = 0; i < n; i++){
		if(str[i] == 'a'){
			count++;
		}
	}
	if(count > (n/2)){
		cout<<n<<endl;
	}else{
		int m = count-1;
		cout<<m+count<<endl;
	}
}
