class Solution {
public:
    int majorityElement(vector<int>& nums) {
       //moores voting algo
       int el=0;
       int cnt =0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]==el) cnt++;
            else if(cnt ==0){
                el = nums[i];
                cnt++;
            }
            else{
                cnt--;
            }
       }
       cnt =0;
       for(int i=0;i<nums.size();i++){
        if(el==nums[i]) cnt++;
        if( cnt >nums.size()/2) return el;
       }
       return -1;
    }
};