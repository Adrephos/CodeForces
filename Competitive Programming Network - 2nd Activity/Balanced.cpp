#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> vec;
    int temp;
    vector<int> finalvec;
    vector<int> sumvec;

    for (int i = 0; i < n; i++){
         cin>>temp;
         vec.push_back(temp); 
    }
    sort(vec.begin(),vec.end());
    for(int i = 0; i < n; i++){
        finalvec.push_back(vec[i]);
    }

    for (int i = 0; i < finalvec.size()/2; i++){
        sumvec[i] = finalvec[i]+finalvec[i+1];

    }
    for(int i = 0; i < sumvec.size(); i++ ){
        cout<<sumvec[i];
    }

    return 0;
}

