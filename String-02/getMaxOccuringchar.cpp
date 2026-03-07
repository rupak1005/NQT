class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        char max='a';
        int count=0;
        vector<int> freq(26,0);
        for(auto i:s){
            freq[i -'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(freq[i]>count){count=freq[i];
            
                max='a'+i;
            }
            
        }
        return max;
    }
};