//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
     int limitofsubarray(int A[],int N,int limit,int M){
       
         int count=1;
         int sum=0;
         
         for(int i=0;i<N;i++){
             if(A[i]>limit){
                 return false;
             }
             if(sum+A[i]>limit){
                 count++;
                 sum=A[i];
             }
             else{
                 sum+=A[i];
             }
         }
         return count<=M;
     }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(N<M){
            return -1;
        }
        int start=*min_element(A,A+N);
        int end=0;
        for(int i=0;i<N;i++){
            end+=A[i];
        }
        int ans=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(limitofsubarray(A,N,mid,M)==false){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends