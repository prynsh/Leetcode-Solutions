class Solution {
public:
    int firstOcc(vector<int> &nums,int n,int target){
        int first=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else high=mid-1;
        }
        return first;
    }
    int lastOcc(vector<int> &nums,int n,int target){
        int last=-1;
          int low=0;
          int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=firstOcc(nums,n,target);
        int ub=lastOcc(nums,n,target);
        return {lb,ub};
    }
};