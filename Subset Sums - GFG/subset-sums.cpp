//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
   void func(int ind,int sum,vector<int>& arr,int n,vector<int>& ans){ 
       
       if(ind==n){
           ans.push_back(sum);
           return;
       }
       
       sum+=arr[ind];
       func(ind+1,sum,arr,n,ans);
       sum-=arr[ind];
       
       func(ind+1,sum,arr,n,ans);
   }
  
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int ind=0;
        int sum=0;
        vector<int> ans;
        
        func(ind,sum,arr,N,ans);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends