#include<iostream>
#include <unordered_map>
#include<vector>
#include<stdlib.h>
using namespace std;

class Solution {
  public:
    string isSubset(vector<int> &arr1, vector<int> &arr2) {

        for(int i=0;i<arr2.size();i++){
            bool found=false;
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    found=true;
                    break;
                }
            }
              if(!found) return "No";
        }
        return "Yes";
        
        
    }


    string isSubset2(vector<int> &arr1, vector<int> &arr2) {
        unordered_map<int,int> freq;
        for(int i=0;i<arr1.size();i++){
            freq[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            if(freq[arr2[i]]==0){
                return "No";
            }
            freq[arr2[i]]--;
        }
        return "Yes";

    }
};

int main(){

    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={1,2,3};
    Solution s;
    cout<<s.isSubset(arr1,arr2)<<endl;
}