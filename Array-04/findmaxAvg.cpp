// User function template for C++

class Solution {
  public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here
        int start=0;
        int maxsum=0;
        int windowsum=0;
        int maxavg=0;
        for(int i=0;i<k;i++){
            windowsum+=arr[i];
            
        }
        maxsum=windowsum;
        
        for(int i=k;i<n;i++){
            windowsum+=arr[i]-arr[i-k];
            if(windowsum>maxsum){
                maxsum=windowsum;
                start=i-k+1;
            }
            maxavg=maxsum/k;
            
        }
        return start;
    }
};