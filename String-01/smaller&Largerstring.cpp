class Solution {
  public:
    vector<string> smallerAndLarge(string &s) {
        
        stringstream ss(s);
        string minword = "", maxword = "", word;

        while(ss >> word){
            
            if(minword == "" || word.length() < minword.length())
                minword = word;

            if(maxword == "" || word.length() >= maxword.length())
                maxword = word;
        }

        return {minword, maxword};
    }
};