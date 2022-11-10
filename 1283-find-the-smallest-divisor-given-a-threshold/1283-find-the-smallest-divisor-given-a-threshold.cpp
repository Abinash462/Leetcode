class Solution {
public:
    int findsumafter(vector<int>& nums, int div){
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=(nums[i]/div);
            
            if(nums[i]%div!=0){
                sum+=1;
            }
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int n=nums.size();
        int end= *max_element(nums.begin(),nums.end());
        int ans=end;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(findsumafter(nums,mid)<=threshold){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};