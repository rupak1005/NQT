#include <bits/stdc++.h>
using namespace std;

void kadane(vector<int>& arr) {
    
    int currSum = 0, maxSum = INT_MIN;
    int start = 0, end = 0, tempStart = 0;

    for(int i = 0; i < arr.size(); i++) {
        
        currSum += arr[i];

        if(currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }

        if(currSum < 0) {
            currSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum: " << maxSum << endl;
    cout << "Subarray: ";

    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";
}