

class Solution {
  public:
    string encryptString(string s) {
        // code here
        string ans;
        int count=1;
        for(int i=1;i<=s.size();i++){
            if(i<s.size() && s[i]==s[i-1]){
                count++;
            }else
                {
                ans+=s[i-1];
                ans+=to_string(count);
                
                
                count=1;
                
                
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};