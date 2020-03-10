#include <iostream> 
#include <vector> 
#include <bits/stdc++.h> 
  
using namespace std;
int search(vector<int>& nums, int number, vector<int>::iterator number1){
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it==number and it!=number1){
                return it - nums.begin();
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(auto it=nums.begin();it!=nums.end();it++){
           int x=search(nums,target-*it, it);
           if(x!=-1){
               result.push_back(it-nums.begin());
               result.push_back(x);
               return result;
           }
       }
        return result;
    }
int main(){
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);

	int target=9;
	vector<int> res=twoSum(nums,target);
	for(auto it=res.begin();it!=res.end();it++){
		cout << *it ;
	}
	return 0;
}
