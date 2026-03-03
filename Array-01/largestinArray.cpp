class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=arr[0];
        int Max=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                Max=arr[i];
            }
            largest=max(largest,Max);
        }
        return largest;
    }
};
