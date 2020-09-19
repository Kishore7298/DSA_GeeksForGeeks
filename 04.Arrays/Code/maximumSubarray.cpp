#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = nums[0];
        int lastMax = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            lastMax = max(nums[i], (nums[i] + lastMax));
            if (lastMax > maxi)
            {
                maxi = lastMax;
            }
        }
        return maxi;
    }
};