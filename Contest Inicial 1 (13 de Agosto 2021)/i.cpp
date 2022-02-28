#include <bits/stdc++.h>
 
using namespace std;
 
int main (){
	string usr;
	cin>>usr;
	set<char> st;
	int n;
	for(int i = 0; i < usr.size(); i++){
		st.insert(usr[i]);	
	}
	n = st.size();
	if(n % 2 == 0){
		cout<<"CHAT WITH HER!"<<endl;
	}else{
		cout<<"IGNORE HIM!"<<endl;
	}
}
