class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer>map = new HashMap<>();
        int res =0;
        int maxcount = 0;
        for(int num : nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        for(Map.Entry<Integer,Integer> entry : map.entrySet()){
            if(entry.getValue()>nums.length/2){
                res = entry.getKey();
            }
        }
        return res;
    }
}