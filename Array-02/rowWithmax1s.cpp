// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int max=-1;
        
        int row=0;
        int col=arr[0].size()-1;
        
        
        while(row<arr.size() && col>=0){
            if(arr[row][col]==1){
                max=row;
                col--;
            }else{
                row++;
            }
        }
        return max;
    }
};


// topright traversal