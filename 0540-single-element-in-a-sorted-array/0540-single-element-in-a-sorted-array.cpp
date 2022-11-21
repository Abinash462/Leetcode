class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        
        for(auto x:nums){
            ans[x]++;
        }
        for(auto y:ans){
            if(y.second==1){
                return y.first;
            }
        }
        return -1;
    }
};