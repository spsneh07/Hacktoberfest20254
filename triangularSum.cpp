#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> coeff(n, 0);
        coeff[0] = 1;

        
        for (int row = 1; row <= n - 1; ++row) {
            for (int j = row; j >= 1; --j) {
                coeff[j] = (coeff[j] + coeff[j - 1]) % 10;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = (ans + coeff[i] * nums[i]) % 10;
        }
        return ans;
    }
};
