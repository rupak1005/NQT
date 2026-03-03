class Solution {
public:
  int getSecondLargest(vector<int> &arr) {
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i : arr) {
      if (i > first) {
        second = first;
        first = i;
      } else if (i > second && i != first) {
        second = i;
      }
    }

    return (second == INT_MIN) ? -1 : second;
  }
};