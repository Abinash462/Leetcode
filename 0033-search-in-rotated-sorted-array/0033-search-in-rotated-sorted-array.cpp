class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start=0;
       // int end=n-1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};