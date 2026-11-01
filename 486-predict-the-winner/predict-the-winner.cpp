class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;

        return solve(nums, 0, nums.size()-1, p1, p2, true);
    }

    bool solve(vector<int>& nums, int i, int j,
               int p1, int p2, bool turn) {

        if(i > j) {
            return p1 >= p2;
        }

        if(turn) {
            return solve(nums, i+1, j, p1+nums[i], p2, false) ||
                   solve(nums, i, j-1, p1+nums[j], p2, false);
        }
        else {
            return solve(nums, i+1, j, p1, p2+nums[i], true) &&
                   solve(nums, i, j-1, p1, p2+nums[j], true);
        }
    }
};