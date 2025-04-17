class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixNums(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            prefixNums[i] = prefixNums[i - 1] + nums[i - 1];
        }

        for (int pivotIndex = 0; pivotIndex < n; pivotIndex++) {
            int leftSum = prefixNums[pivotIndex];
            int rightSum = prefixNums[n] - prefixNums[pivotIndex + 1];
            if (leftSum == rightSum) {
                return pivotIndex;
            }
        }
        return -1;
    }
};
