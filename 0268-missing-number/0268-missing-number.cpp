class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int XOR1=0;
        // int XOR2=0;
        int result=nums.size();
        for(int i=0;i<nums.size();i++){
            result=result^i^nums[i];
        }
        return result;
    }
};