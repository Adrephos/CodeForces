#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	string abc;
	cin>>abc;
	string word;
	cin>>abc;
	set<string> out;
	for(int i = 0; i < word.size();i++){
		string temp = "";
		for(int j = 0; j < word.size();j++){
			if(j != i){
				temp.push_back(word[j]);
			}
		}
		out.insert(temp);
	}
	for(int i = 0; i < word.size();i++){
		string temp = "";
		for(int j = 0; j < abc.size();j++){
			for(int k = 0; k < word.size(); k++){
				if(k == i){
					temp.push_back(word[k]);
					temp.push_back(word[j]);
				}else {
					temp.push_back(word[k]);
				}
			}
		}
		out.insert(temp);
	}
	for(int i = 0; i < word.size();i++){
		string temp = "";
		for(int j = 0; j < abc.size();j++){
			for(int k = 0; k < word.size(); k++){
				if(k == i){
					temp.push_back(word[j]);
				}else {
					temp.push_back(word[k]);
				}
			}
		}
		out.insert(temp);
	}
	copy(out.begin(),
            out.end(),
			ostream_iterator<string>(cout, " "));
}
