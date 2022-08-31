class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> aans;
        unordered_map<int,int> pair;
        
        for(int i=0;i<nums.size();i++){
            if(pair.find(target-nums[i])!=pair.end()){
                aans.push_back(pair[target-nums[i]]);
                aans.push_back(i);
                return aans;
            }
            pair[nums[i]]=i;
        }
        return aans;
    }
};