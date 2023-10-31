class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        int n = sorted_nums.size();
        int low = 0;
        int high = n - 1;
        vector<int> ans;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (sorted_nums[mid] == target) {
                ans.push_back(mid);
                int left = mid - 1;
                int right = mid + 1;
                while (left >= 0 && sorted_nums[left] == target) {
                    ans.push_back(left);
                    left--;
                }
                while (right < n && sorted_nums[right] == target) {
                    ans.push_back(right);
                    right++;
                }
                break; 
            } else if (sorted_nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        sort(ans.begin(), ans.end()); 
        return ans;
    }
};
