class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        int ans;
        for(int i=0; i<nums.size(); i++){
            if(hash[nums[i]]==1){
                ans=i;
            }
        }
        return nums[ans];
    }
};