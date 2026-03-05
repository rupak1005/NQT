```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(const std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int max_profit = 0;
        int min_price = prices[0];

        for (const int price : prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }

        return max_profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
```
