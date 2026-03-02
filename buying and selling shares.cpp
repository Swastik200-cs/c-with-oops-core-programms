#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int buy1 = INT_MIN, buy2 = INT_MIN;
        int sell1 = 0, sell2 = 0;
        for (int price : prices) {
            buy1 = max(buy1, -price);
            sell1 = max(sell1, buy1 + price);
            buy2 = max(buy2, sell1 - price);
            sell2 = max(sell2, buy2 + price);
        }
        return sell2;
    }
};
int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    vector<int> prices(n);
    cout << "Enter prices: ";
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    Solution obj;
    cout << "Maximum Profit = " << obj.maxProfit(prices);
    return 0;
}