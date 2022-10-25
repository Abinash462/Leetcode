class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string ans;
        string ans2;
        for(string x:word1){
            ans+=x;
        }
        
        for(string x:word2){
            ans2+=x;
        }
        
        if(ans==ans2){
            return true;
        }
        return false;
    }
};