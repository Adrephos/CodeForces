#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
    cin>>a;
    int b;
    cin>>b;
	int count = 0;
	while(a != b){
		if(a < b){
			count++;
			a++;
		}else {
			if(a % 2 == 0){
				a = a/2;
				count++;
			}else{
				a++;
				count++;
			}
		}
	}
	cout<<count<<endl;
}
