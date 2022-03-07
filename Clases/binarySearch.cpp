#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	vector<int> nums {1,2,4,5,6,7,8,9,10};
	int target = 9;
	int l = 0;
	int r = nums.size()-1;
	int m;
	while (l < r) {
		m = l+(r-1)/2;
		if(nums[m] == target){
			cout<<m<<endl; //Index of the target in the array
			break;
		}else if(nums[m] < target){
			l = m+1;
		}else{
			r = m-1;
		}
	}
}
