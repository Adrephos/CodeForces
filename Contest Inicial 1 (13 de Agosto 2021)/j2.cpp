#include <bits/stdc++.h>
 
using namespace std;
int a[500];
bool used[500];
int main()
{
    int n;
    cin>>n;
    int p=n/2;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int val=sum/p;
   // cout<<"val"<<val<<endl;
    int pi=val;
    int co=0;
    //map<pair<int,int>int>p;
    for(int i=0;i<n;i++){
            if(used[i]==0){
           used[i]=1;//0
           int x=val-a[i];//10
           cout<<i+1<<" ";//1
           bool mark =false;
           for(int j=i+1;j<n;j++){
            if(a[j]==x && used[j]==0){
                    mark=true;
            cout<<j+1;//2
            cout<<endl;
            used[j]=1;//2
            co++;//1
            if(co==p)
                break;
            if(mark==true)
                break;
 
 
           }
           }
 
            }
    }
        return 0;
    }
