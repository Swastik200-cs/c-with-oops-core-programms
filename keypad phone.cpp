#include <vector>
using namespace std;
class Solution {
public:
    int getCount(int n) {
        if (n == 1) return 10;
        vector<vector<int>> move = {
            {0,8},
            {1,2,4},
            {2,1,3,5},
            {3,2,6},
            {4,1,5,7},
            {5,2,4,6,8},
            {6,3,5,9},
            {7,4,8},
            {8,5,7,9,0},
            {9,6,8}
        };
        vector<long long> prev(10, 1), curr(10);
        for (int i = 2; i <= n; i++) {
            for (int d = 0; d < 10; d++) {
                curr[d] = 0;
                for (int next : move[d])
                    curr[d] += prev[next];
            }
            prev = curr;
        }
        long long ans = 0;
        for (int i = 0; i < 10; i++)
            ans += prev[i];
        return ans;
    }
};