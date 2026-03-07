class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        map<char,char> m1;
        map<char,char> m2;
        
        
        for(int i=0;i<s1.size();i++){
            if(m1.count(s1[i]) && m1[s1[i]] != s2[i])
                return false;

            if(m2.count(s2[i]) && m2[s2[i]] != s1[i])
                return false;
            m1[s1[i]]=s2[i];
            m2[s2[i]]=s1[i];
        }
        return true;
    }
};