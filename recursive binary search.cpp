class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binary_search(nums, target, 0, nums.size() - 1);
    }

private:
    int binary_search(vector<int>& nums, int target, int i, int j) {
        if (i > j) {
            return -1; 
        }

        int tl = i + (j - i) / 2;

        if (nums[tl] == target) {
            return tl; 
        } else if (nums[tl] > target) {
            return binary_search(nums, target, i, tl - 1); 
        } else {
            return binary_search(nums, target, tl + 1, j);
        }
    }
};
