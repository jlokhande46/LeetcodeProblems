	int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(auto it=nums.begin();it!=nums.end();it++){
            int n=nums.size();
            int x=(int)n/2;
            if(*it==*(it+x))
                return *it;
        }
        return -1;
    }
