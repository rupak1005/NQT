// User function Template for C++

class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
        int count=0;
        for(auto a:Mat){
            
            
            bool asc=true,dec=true;
            for(int i=1;i<a.size();i++){
                if(a[i]<=a[i-1]){
                    asc=false;
                    
                }
                if(a[i]>=a[i-1]){
                    dec=false;
                    
                }
                
            }
            if(asc || dec)count++;
            
            
            
            
        }
        return count;
        
    }
};