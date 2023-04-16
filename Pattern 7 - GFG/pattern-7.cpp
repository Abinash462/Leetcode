//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        //travel number of row
        for(int i=0;i<n;i++){
            
            //print space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            
            //print *
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            
            //print space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends