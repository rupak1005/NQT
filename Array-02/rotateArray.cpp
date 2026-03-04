#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>


using namespace std;


class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {

        d=d%arr.size();

        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());

    }
};

int main(){


    vector<int> arr={1,2,3,4,5};
    int d=2;
    Solution s;
    s.rotateArr(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}