class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int more = target - nums[i];
            if(mpp.find(more)!=mpp.end()){//first check
                ans={mpp[more],i}; 
            }
            mpp[nums[i]]=i; // then put into hashmap
        }
            return ans;
    }
};
