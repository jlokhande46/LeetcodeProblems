vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nums1=nums;
        sort(nums.begin(), nums.end());
        vector<int> res1,res2;
        int x=0;
        for(auto it=nums.begin(); it!=nums.end();it++,x++){
            if(x!=0 && *it==*(it-1)){
                res1.push_back(res1.at(x-1));
            }
            else{
                res1.push_back(x);
            }
        }
        for(auto it=nums1.begin();it!=nums1.end();it++){
            vector<int>::iterator it2 = find(nums.begin(), nums.end(), *it);
            res2.push_back(res1.at(it2-nums.begin()));
        }
        return res2;
    }